/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:23:43 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/19 19:37:11 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char			*ptr_src;
	char			*ptr_dest;
	unsigned int	i;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	if (dest == (void *) 0 && src == (void *) 0 && n > 0)
		return (dest);
	if (ptr_dest > ptr_src)
	{
		while (n-- > 0)
			ptr_dest[n] = ptr_src[n];
	}
	else
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}
