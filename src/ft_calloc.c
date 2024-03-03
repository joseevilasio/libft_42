/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:48:45 by josejunior        #+#    #+#             */
/*   Updated: 2024/03/03 11:49:11 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*elem;

	if (elsize == 0 || nelem == 0)
	{
		nelem = 1;
		elsize = 1;
	}
	elem = (void *) malloc((nelem * elsize) * sizeof(unsigned char));
	if (elem != NULL)
	{
		ft_memset(elem, 0, (nelem * elsize));
		return (elem);
	}
	return (NULL);
}
