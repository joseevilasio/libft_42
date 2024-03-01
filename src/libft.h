/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:05:10 by josejunior        #+#    #+#             */
/*   Updated: 2024/03/01 13:27:02 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

/*Checks c is an alphabetic character.
 -- Return:
The values returned are nonzero if the character c falls into the tested
class, and zero if not.*/
int				ft_isalpha(int c);
/*Checks c is a decimal digit.
 -- Return:
function return non-zero if
c is a decimal digit; otherwise, they shall return 0.*/
int				ft_isdigit(int c);
/*Checks c is an alphanumeric.
 -- Return:
function return non-zero if
c is an alphanumeric character; otherwise, they shall return 0.*/
int				ft_isalnum(int c);
/*Checks c is a 7-bit US-ASCII.
 -- Return:
function return non-zero if
c is a is a 7-bit US-ASCII character; otherwise, they shall return 0.*/
int				ft_isascii(int c);
/*Checks c is a printable character.
 -- Return:
function return non-zero if
c is a printable character character; otherwise, they shall return 0.*/
int				ft_isprint(int c);
/*check the size string.
 -- Return:
integer with length string .*/
int				ft_strlen(char *str);
void			*ft_memset(void *ptr, int c, size_t n);
void			ft_bzero(void *ptr, unsigned int n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
/*Convert a string to an integer.*/
int				ft_atoi(char *str);
char			*ft_strdup(char *src);
char			*ft_strnstr(char *str, char *to_find, unsigned int len);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memmove(void *dest, const void *src, unsigned int n);
char			*ft_strchr(char *s, int c);
char			*ft_strrchr(char *s, int c);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
void			*ft_calloc(size_t nelem, size_t elsize);

/* Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’ */
char			*ft_substr(char const *s, unsigned int start, size_t len);

/* Allocates (with malloc(3)) and returns a new string, which is the result of
the concatenation of ’s1’ and ’s2’. */
char			*ft_strjoin(char const *s1, char const *s2);

/* Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
specified in ’set’ removed from the beginning and the end of the string. */
// char			*ft_strtrim(char const *s1, char const *set);

/* Allocates (with malloc(3)) and returns an array of strings obtained by 
splitting ’s’ using the character ’c’ as a delimiter. The array must end with
a NULL pointer */
char			**ft_split(char const *s, char c);

/* Allocates (with malloc(3)) and returns a string representing the integer
received as an argument. Negative numbers must be handled. */
char			*ft_itoa(int n);

/* Applies the function ’f’ to each character of the string ’s’, and passing
its index as first argument to create a new string (with malloc(3)) resulting
from successive applications of ’f’. */
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* Applies the function ’f’ on each character of the string passed as argument,
passing its index as first argument. Each character is passed by address to ’f’
to be modified if necessary.*/
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif //LIBFT_H
