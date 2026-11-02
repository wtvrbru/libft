/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:54:57 by rtouirta          #+#    #+#             */
/*   Updated: 2026/11/02 16:57:01 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*strs;
	unsigned char		*strd;

	strs = (const unsigned char *)src;
	strd = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (dest);
}
