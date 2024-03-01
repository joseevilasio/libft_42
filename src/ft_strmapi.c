/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:14:08 by josejunior        #+#    #+#             */
/*   Updated: 2024/03/01 11:06:04 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*ptr_s;
	char			c;
	unsigned int	i;

	ptr_s = (char *) s;
	i = 0;
	str = (char *) malloc(ft_strlen(ptr_s) * sizeof(char) + 1);
	if (str != NULL)
	{
		while (ptr_s[i])
		{
			c = (char) f(i, ptr_s[i]);
			str[i] = c;
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
