/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:45:28 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/26 19:55:00 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_ischar(char *s, char c)
{
	if (s == NULL)
		return (s);
	while (*s == c)
		s++;
	return (s);
}

static int	ft_strchrlen(char *s, char c)
{
	int	i;

	i = 1;
	s = ft_ischar(s, c);
	if (s == NULL)
		return (0);
	if (*s == '\0')
		return (0);
	while (*s)
	{
		if (*s == c)
		{
			s = ft_ischar(s, c);
			if (*s != '\0')
				i++;
			else
				s--;
		}
		s++;
	}
	return (i);
}

static unsigned int	ft_strlenbetweensep(char *s, char c)
{
	unsigned int	size;
	char			*support;

	support = s;
	s = ft_strchr(s, c);
	if (s == NULL)
		size = ft_strlen(support);
	else
		size = ft_strlen(support) - ft_strlen(s);
	return (size);
}

static char	*ft_strndup(char *src, unsigned int size)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *) malloc(size * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	while (i < size)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*ptr_s;
	int		tab_size;
	int		i;

	ptr_s = (char *) s;
	tab_size = ft_strchrlen(ptr_s, c);
	tab = (char **) malloc((tab_size + 1) * sizeof(char *));
	i = 0;
	if (tab)
	{
		while (tab_size-- > 0)
		{
			ptr_s = ft_ischar(ptr_s, c);
			tab[i] = ft_strndup(ptr_s, ft_strlenbetweensep(ptr_s, c));
			ptr_s = ptr_s + ft_strlen(tab[i]);
			i++;
		}
		tab[i] = 0;
		return (tab);
	}
	return (NULL);
}
