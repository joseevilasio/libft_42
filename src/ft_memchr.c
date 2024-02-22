/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:34:02 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/22 23:14:19 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	char_s;

	str = (unsigned char *) s;
	char_s = (unsigned char) c;
	c = c % 256;
	if (n > 0)
	{
		while (n-- > 0)
		{
			if (*str == char_s)
				return (str);
			str++;
		}
	}
	return ((void *) 0);
}
