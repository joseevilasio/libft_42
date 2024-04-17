/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- <joneves-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:01:01 by joneves-          #+#    #+#             */
/*   Updated: 2024/04/16 19:01:04 by joneves-         ###   ########.fr       */
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
