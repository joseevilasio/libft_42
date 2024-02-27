/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:40:33 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/27 20:43:32 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchrlen(char *s, char c)
{
	int	i;

	i = 1;
	s = ft_ischar(s, c);
	if (s == NULL)
		return (0);
	if (*s == '\0')
		i = 0;
	while (*s)
	{
		if (*s == c)
		{
			s = ft_ischar(s, c);
			if (*s != '\0')
				i++;
			else
				s--;
		}
		s++;
	}
	return (i);
}
