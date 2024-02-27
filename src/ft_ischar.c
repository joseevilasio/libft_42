/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:16:29 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/27 20:38:35 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ischar(char *s, char c)
{
	if (s == NULL)
		return (s);
	while (*s == c)
		s++;
	return (s);
}