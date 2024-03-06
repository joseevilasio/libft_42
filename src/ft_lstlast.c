/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:48:22 by josejunior        #+#    #+#             */
/*   Updated: 2024/03/06 15:28:58 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*start;

	if (lst && lst->next)
	{
		start = lst->next;
		while (start->next)
		{
			start = start->next;
		}
		return (start);
	}
	return (lst);
}
