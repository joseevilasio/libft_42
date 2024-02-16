/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 19:43:47 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/16 21:29:32 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, unsigned int len)
{
	int				index;
	unsigned int	i;
	unsigned int	x;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0' && i++ <= len)
	{
		if (*str == *to_find)
		{
			index = 0;
			x = i;
			while (to_find[index] != '\0' && x <= len
				&& str[index] == to_find[index])
			{
				x++;
				index++;
			}
			if (index == ft_strlen(to_find))
				return (str);
		}
		str++;
	}
	return (0);
}
