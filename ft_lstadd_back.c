/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:28:53 by rtouirta          #+#    #+#             */
/*   Updated: 2026/10/27 20:28:55 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *temp;

    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    temp = *lst;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = new;
}

