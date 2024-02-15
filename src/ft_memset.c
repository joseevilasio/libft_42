/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:35:02 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/15 18:27:14 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*char_ptr;

	i = 0;
	char_ptr = ptr;
	while (i < n)
	{
		char_ptr[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}
