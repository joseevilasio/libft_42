/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- <joneves-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:03:04 by joneves-          #+#    #+#             */
/*   Updated: 2024/04/16 19:03:06 by joneves-         ###   ########.fr       */
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
