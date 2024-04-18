/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:03:04 by joneves-          #+#    #+#             */
/*   Updated: 2024/04/17 21:01:20 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*start;
	int		i;

	i = 0;
	if (lst != NULL)
	{
		i++;
		start = lst->next;
		while (start)
		{
			start = start->next;
			i++;
		}
	}
	return (i);
}
