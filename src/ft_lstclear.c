/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:47:33 by josejunior        #+#    #+#             */
/*   Updated: 2024/03/07 13:28:44 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*start;

	if (*lst != NULL)
	{
		start = *lst;
		while (start->next)
		{
			ft_lstdelone(start, del);
			start = start->next;
		}
		ft_lstdelone(start, del);
		*lst = NULL;
	}
	else
		*lst = NULL;
}
