/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:37:29 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/15 19:39:06 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index_src;
	unsigned int	index_dest;
	unsigned int	i;

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
