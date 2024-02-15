/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:35:02 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/15 18:55:03 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *ptr, unsigned int n)
{
	unsigned int	i;
	unsigned char	*char_ptr;

	i = 0;
	char_ptr = ptr;
	while (i < n)
	{
		char_ptr[i] = (unsigned char) 0;
		i++;
	}
}
