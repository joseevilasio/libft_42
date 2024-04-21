/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- <joneves-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:20:45 by joneves-          #+#    #+#             */
/*   Updated: 2024/04/21 21:20:47 by joneves-         ###   ########.fr       */
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
	if (str)
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
