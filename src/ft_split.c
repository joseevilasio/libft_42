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

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*ptr_s;
	int		tab_size;
	int		size;
	int		i;

	ptr_s = (char *) s;
	tab_size = ft_strchrlen(ptr_s, c);
	tab = (char **) malloc((tab_size + 1) * sizeof(char *));
	i = 0;
	if (tab == NULL)
		return (NULL);
	while (tab_size-- > 0)
	{
		ptr_s = ft_ischar(ptr_s, c);
		size = ft_bsizechr(ptr_s, c);
		tab[i] = (char *) malloc(size * sizeof(char) + 1);
		if (tab[i] == NULL)
			break ;
		ft_strlcpy(tab[i], ptr_s, size + 1);
		i++;
		ptr_s = ptr_s + size;
	}
	tab[i] = NULL;
	return (tab);
}
