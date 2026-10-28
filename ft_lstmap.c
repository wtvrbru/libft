/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:49:07 by rtouirta          #+#    #+#             */
/*   Updated: 2026/10/28 14:49:10 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list  *new_list;
    t_list  *new_node;

    if (lst == NULL)
            return (NULL);
    new_list = NULL;
    while (lst)
    {
        if (f)
            new_node = ft_lstnew(f(lst->content));
        else
            new_node = ft_lstnew(lst->content);
        if (new_node == NULL)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}

