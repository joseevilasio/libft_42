/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:52:00 by josejunior        #+#    #+#             */
/*   Updated: 2024/03/05 20:06:32 by josejunior       ###   ########.fr       */
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
