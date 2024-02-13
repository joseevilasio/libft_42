/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:05:10 by josejunior        #+#    #+#             */
/*   Updated: 2024/02/13 20:51:24 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

/*Checks for an alphabetic character.
 -- Return:
The values returned are nonzero if the character c falls into the tested
class, and zero if not.*/
int	ft_isalpha(int c);
/*Checks for an decimal digit.
 -- Return:
function return non-zero if
c is a decimal digit; otherwise, they shall return 0.*/
int	ft_isdigit(int c);
/*Checks for an alphanumeric.
 -- Return:
function return non-zero if
c is an alphanumeric character; otherwise, they shall return 0.*/
int	ft_isalnum(int c);

#endif //TESTS_H
