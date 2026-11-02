/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:59:59 by rtouirta          #+#    #+#             */
/*   Updated: 2026/11/02 15:22:42 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	while (i < size && dst[i])
		i++;
	dst_len = i;
	while (src[j])
		j++;
	src_len = j;
	if (i == size)
		return (src_len + size);
	j = 0;
	while (src[j] && j < size - dst_len - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = 0;
	return (dst_len + src_len);
}
