/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:09:49 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/22 22:49:59 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	size;
	unsigned int	size_s1;
	unsigned int	size_s2;

	size_s1 = ft_strlen((char *) s1);
	size_s2 = ft_strlen((char *) s2);
	size = size_s1 + size_s2;
	str = (char *) malloc(size * sizeof(char) + 1);
	if (str != NULL)
	{
		ft_strlcpy(str, (char *)s1, size_s1 + 1);
		ft_strlcpy(str + size_s1, (char *)s2, size_s2 + 1);
		return (str);
	}
	return (NULL);
}
