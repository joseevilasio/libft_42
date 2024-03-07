/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:31:02 by josejunior        #+#    #+#             */
/*   Updated: 2024/03/07 17:18:08 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*start;

	start = lst;
	new_lst = NULL;
	while (start)
	{
		f(start->content);
		ft_lstadd_back(&new_lst, ft_lstnew(start->content));
		start = start->next;
	}
	del(start);
	start = NULL;
	return (new_lst);
}
