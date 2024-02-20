/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:34:02 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/20 19:40:16 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s) + 1;
	c = c % 256;
	while (i-- > 0)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ((void *) 0);
}
