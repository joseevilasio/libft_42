/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:58:42 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/22 19:25:45 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*ptrs;
	unsigned int	len_s;
	unsigned int	size;

	len_s = ft_strlen((char *)s);
	size = len_s - start;
	if (len_s <= start)
	{
		len = 0;
		start = len_s;
	}
	if (len > size)
		len = size;
	str = (char *) malloc(len * sizeof(char) + 1);
	if (str != NULL)
	{
		ptrs = (char *) s + start;
		ft_strlcpy(str, ptrs, len + 1);
		return (str);
	}
	else
		return (NULL);
}
