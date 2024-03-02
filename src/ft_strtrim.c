/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:26:14 by josejunior        #+#    #+#             */
/*   Updated: 2024/03/02 20:48:16 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_strspn(char const *s1, char const *set)
{
	unsigned int	len;

	len = 0;
	while (*s1 && ft_strchr((char *) set, *s1))
	{
		len++;
		s1++;
	}
	return (len);
}

static unsigned int	ft_strrspn(char const *s1, char const *set)
{
	unsigned int	len;
	unsigned int	size;

	len = 0;
	if (ft_strlen((char *) s1) == 0)
		size = 0;
	else
		size = ft_strlen((char *) s1) - 1;
	while (s1[size] && ft_strchr((char *) set, s1[size]))
	{
		len++;
		size--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	unsigned int	end;
	unsigned int	size;

	start = ft_strspn(s1, set);
	if (start == (unsigned int) ft_strlen((char *) s1))
	{
		str = (char *) malloc(1 * sizeof(char));
		if (str != NULL)
		{
			ft_strlcpy(str, "", 1);
			return (str);
		}
		return (NULL);
	}
	end = ft_strrspn(s1, set);
	size = ft_strlen((char *) s1) - (start + end);
	str = (char *) malloc(size * sizeof(char) + 1);
	if (str != NULL)
	{
		ft_strlcpy(str, (char *) s1 + start, size + 1);
		return (str);
	}
	return (NULL);
}
