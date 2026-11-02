/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtouirta <rtouirta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:33:01 by rtouirta          #+#    #+#             */
/*   Updated: 2026/11/02 16:54:02 by rtouirta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digits_count(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i = 1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*storin(int n)
{
	char	*buffer;
	size_t	i;
	int		x;

	buffer = malloc(digits_count(n) + 1);
	if (buffer == NULL)
		return (NULL);
	i = digits_count(n);
	buffer[i] = 0;
	x = n;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		i--;
		buffer[i] = n % 10 + '0';
		n = n / 10;
	}
	if (x < 0)
		buffer[0] = '-';
	return (buffer);
}

static char	*case_int_min(int n)
{
	char	*buffer;

	(void)n;
	buffer = malloc(12);
	if (buffer == NULL)
		return (NULL);
	buffer[0] = '-';
	buffer[1] = '2';
	buffer[2] = '1';
	buffer[3] = '4';
	buffer[4] = '7';
	buffer[5] = '4';
	buffer[6] = '8';
	buffer[7] = '3';
	buffer[8] = '6';
	buffer[9] = '4';
	buffer[10] = '8';
	buffer[11] = 0;
	return (buffer);
}

char	*ft_itoa(int n)
{
	char	*result;

	if (n == -2147483648)
	{
		result = case_int_min(n);
		return (result);
	}
	if (n == 0)
	{
		result = malloc(2);
		if (result == NULL)
			return (NULL);
		result[0] = '0';
		result[1] = 0;
		return (result);
	}	
	result = storin(n);
	return (result);
}
