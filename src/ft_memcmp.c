/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:53:54 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/20 20:11:37 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *) s1;
	ptr_s2 = (unsigned char *) s2;
	if (n > 0)
	{
		while (n-- > 0)
		{
			if (*ptr_s1 != *ptr_s2)
				return (*ptr_s1 - *ptr_s2);
			ptr_s1++;
			ptr_s2++;
		}
	}
	return (0);
}
