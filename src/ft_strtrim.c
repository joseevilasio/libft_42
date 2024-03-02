/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:26:14 by josejunior        #+#    #+#             */
/*   Updated: 2024/03/01 23:37:56 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_strlen_set(char *s1, char *set)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(s1);
	while (*s1)
	{
		i = 0;
		while (*(set + i))
		{
			if (*s1 == *(set + i))
				x--;
			i++;
		}
		s1++;
	}
	return (x);
}

static unsigned int	ft_cmpchar(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	char			*ptr_s1;
	char			*ptr_set;
	unsigned int	size;

	ptr_s1 = (char *) s1;
	ptr_set = (char *) set;
	size = ft_strlen_set(ptr_s1, ptr_set);
	str = (char *) malloc(size * sizeof(char) + 1);
	if (str != NULL)
	{
		while (*ptr_s1)
		{
			if (ft_cmpchar(*ptr_s1, ptr_set) == 0)
			{
				*str = (char ) *ptr_s1;
				str++;
			}
			ptr_s1++;
		}
		*str = '\0';
		return (str - size);
	}
	return (NULL);
}
