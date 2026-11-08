/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:11:22 by rtouirta          #+#    #+#             */
/*   Updated: 2026/11/06 18:14:14 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*strs;
	unsigned char		*strd;

	i = 0;
	strs = (const unsigned char *)src;
	strd = (unsigned char *)dest;
	if (strd < strs)
	{
		while (i < n)
		{
			strd[i] = strs[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			strd[i] = strs[i];
		}
	}
	return (dest);
}
