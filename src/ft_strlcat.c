/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:37:29 by josejunior        #+#    #+#             */
/*   Updated: 2024/04/09 21:29:05 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index_src;
	size_t	index_dest;
	size_t	i;

	index_src = 0;
	index_dest = 0;
	i = 0;
	while (src[index_src] != '\0')
		index_src++;
	while (dest[index_dest] != '\0')
		index_dest++;
	if (size <= index_dest)
		return (size + index_src);
	while (src[i] != '\0' && (index_dest + i) < (size - 1))
	{
		dest[index_dest + i] = src[i];
		i++;
	}
	dest[index_dest + i] = '\0';
	return (index_dest + index_src);
}
