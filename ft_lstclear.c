/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:11:43 by rtouirta          #+#    #+#             */
/*   Updated: 2026/11/02 16:54:13 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*t;

	if (lst == NULL || *lst == NULL)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		t = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = t;
	}
	*lst = NULL;
}
