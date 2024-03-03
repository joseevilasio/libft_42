/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:35:02 by josejunior        #+#    #+#             */
/*   Updated: 2024/03/03 11:44:57 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*char_ptr;

	i = 0;
	char_ptr = (unsigned char *) ptr;
	while (i < n)
	{
		char_ptr[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}
