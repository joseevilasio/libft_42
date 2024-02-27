/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsizechr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:16:52 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/27 20:44:25 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_bsizechr(char *s, char c)
{
	unsigned int	size;
	char			*support;

	support = s;
	s = ft_strchr(s, c);
	if (s == NULL)
		size = ft_strlen(support);
	else
		size = ft_strlen(support) - ft_strlen(s);
	return (size);
}
