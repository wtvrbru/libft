/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 11:06:31 by rtouirta          #+#    #+#             */
/*   Updated: 2026/11/02 16:13:46 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*a;
	size_t			t;
	size_t			i;

	if (size != 0 && nmemb > ((size_t)-1) / size)
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
