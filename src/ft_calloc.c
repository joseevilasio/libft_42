/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:01:01 by joneves-          #+#    #+#             */
/*   Updated: 2024/04/20 20:32:20 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*elem;

	elem = (void *) malloc((nelem * elsize) * sizeof(unsigned char));
	if (elem != NULL)
	{
		ft_memset(elem, 0, (nelem * elsize));
		return (elem);
	}
	return (NULL);
}
