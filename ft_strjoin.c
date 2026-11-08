/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:00:50 by rtouirta          #+#    #+#             */
/*   Updated: 2026/11/06 18:14:27 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	join(char *result, char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	slen;
	size_t	dlen;

	if (!s1 || !s2)
		return (NULL);
	slen = ft_strlen(s1);
	dlen = ft_strlen(s2);
	result = malloc(slen + dlen + 1);
	if (!result)
		return (NULL);
	join(result, s1, s2);
	return (result);
}
