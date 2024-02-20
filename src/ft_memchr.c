/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:34:02 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/20 20:27:16 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const char *s, int c, unsigned int n)
{
	unsigned char	*str;
	unsigned char	_char;

	str = (unsigned char *) s;
	_char = (unsigned char) c;
	c = c % 256;
	if (n > 0)
	{
		while (n-- > 0)
		{
			if (*str == _char)
				return (str);
			str++;
		}
	}
	return ((void *) 0);
}
