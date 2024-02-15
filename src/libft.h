/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:05:10 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/15 18:27:20 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

/*Checks c is an alphabetic character.
 -- Return:
The values returned are nonzero if the character c falls into the tested
class, and zero if not.*/
int		ft_isalpha(int c);
/*Checks c is a decimal digit.
 -- Return:
function return non-zero if
c is a decimal digit; otherwise, they shall return 0.*/
int		ft_isdigit(int c);
/*Checks c is an alphanumeric.
 -- Return:
function return non-zero if
c is an alphanumeric character; otherwise, they shall return 0.*/
int		ft_isalnum(int c);
/*Checks c is a 7-bit US-ASCII.
 -- Return:
function return non-zero if
c is a is a 7-bit US-ASCII character; otherwise, they shall return 0.*/
int		ft_isascii(int c);
/*Checks c is a printable character.
 -- Return:
function return non-zero if
c is a printable character character; otherwise, they shall return 0.*/
int		ft_isprint(int c);
/*check the size string.
 -- Return:
integer with length string .*/
int		ft_strlen(char *str);
void	*ft_memset(void *ptr, int c, unsigned int n);

#endif //TESTS_H
