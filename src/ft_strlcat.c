/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- <joneves-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:04:28 by joneves-          #+#    #+#             */
/*   Updated: 2024/04/16 19:04:30 by joneves-         ###   ########.fr       */
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
