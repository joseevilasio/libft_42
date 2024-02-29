/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:46:39 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/29 21:27:30 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	ft_digitlen(int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
	{
		n = -1 * n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	size = ft_digitlen(n);
	str = (char *) malloc(size * sizeof(char) + 1);
	if (str != NULL)
	{
		if (n < 0)
		{
			n = -1 * n;
			str[0] = '-';
		}
		str[size] = '\0';
		while (size-- > 0 && n > 9)
		{
			str[size] = n % 10 + '0';
			n = n / 10;
		}
		str[size] = n + '0';
	}
	return (str);
}
