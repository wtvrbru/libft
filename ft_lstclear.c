/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:11:43 by rtouirta          #+#    #+#             */
/*   Updated: 2026/11/07 19:13:02 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*t;

	if (lst == NULL || *lst == NULL || !del)
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
