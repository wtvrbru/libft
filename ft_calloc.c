/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:13:29 by rtouirta          #+#    #+#             */
/*   Updated: 2026/11/07 16:31:58 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*a;
	size_t			t;
	size_t			i;

	if (!nmemb || !size)
	{
		a = malloc (1);
		if (!a)
			return (NULL);
		return (a);
	}
	if (nmemb > ((size_t)-1) / size)
		return (NULL);
	t = nmemb * size;
	a = malloc(t);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < t)
	{
		a[i] = 0;
		i++;
	}
	return ((void *)a);
}
