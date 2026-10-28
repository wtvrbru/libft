/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:45:50 by rtouirta          #+#    #+#             */
/*   Updated: 2026/10/21 22:49:41 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	is_in_set(char c, char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	x;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && is_in_set(s1[i], (char *)set))
		i++;
	j = ft_strlen(s1);
	while (j > i && is_in_set(s1[j - 1], (char *)set))
		j--;
	result = malloc(j - i + 1);
	if (result == NULL)
		return (NULL);
	x = 0;
	while (i < j)
	{
		result[x] = s1[i];
		i++;
		x++;
	}
	result[x] = 0;
	return (result);
}
