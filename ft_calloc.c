/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 11:06:31 by rtouirta          #+#    #+#             */
/*   Updated: 2026/10/20 18:23:19 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	void	*a;
	size_t	t;
	size_t	i;

	t = nmemb * size;
	a = malloc(t);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < t)
	{
		(unsigned char *)a[i] = 0;
		i++;
	}
	return (a);
}
