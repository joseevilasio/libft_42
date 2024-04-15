/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- <joneves-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:32:10 by josejunior        #+#    #+#             */
/*   Updated: 2024/04/15 17:34:40 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_)
{
	t_list	*start;

	if (*lst != NULL)
	{
		start = *lst;
		while (start->next)
			start = start->next;
		start->next = new_;
	}
	else
		*lst = new_;
}
