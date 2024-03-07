/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:05:10 by josejunior        #+#    #+#             */
/*   Updated: 2024/03/07 17:17:45 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

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
char			*ft_strtrim(char const *s1, char const *set);

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

/* Outputs the character ’c’ to the given file descriptor. */
void			ft_putchar_fd(char c, int fd);

/* Outputs the string ’s’ to the given file descriptor. */
void			ft_putstr_fd(char *s, int fd);

/* Outputs the string ’s’ to the given file descriptor followed by a newline.*/
void			ft_putendl_fd(char *s, int fd);

/* Outputs the integer ’n’ to the given file descriptor. */
void			ft_putnbr_fd(int n, int fd);

/* BONUS PART */
/* Allocates (with malloc(3)) and returns a new node. The member variable 
’content’ is initialized with the value of the parameter ’content’. The
variable ’next’ is initialized to NULL. */
t_list			*ft_lstnew(void *content);

/* Adds the node ’new’ at the beginning of the list.  */
void			ft_lstadd_front(t_list **lst, t_list *new);

/* Counts the number of nodes in a list. */
int				ft_lstsize(t_list *lst);

/* Returns the last node of the list. */
t_list			*ft_lstlast(t_list *lst);

/* Adds the node ’new’ at the end of the list. */
void			ft_lstadd_back(t_list **lst, t_list *new);

/* Takes as a parameter a node and frees the memory of the node’s content using
the function ’del’ given as a parameter and free the node. The memory of ’next’
must not be freed. */
void			ft_lstdelone(t_list *lst, void (*del)(void *));

/* Deletes and frees the given node and every successor of that node, using the
function ’del’ and free(3). Finally, the pointer to the list must be set to
NULL. */
void			ft_lstclear(t_list **lst, void (*del)(void *));

/* Iterates the list ’lst’ and applies the function
’f’ on the content of each node. */
void			ft_lstiter(t_list *lst, void (*f)(void *));

/* Iterates the list ’lst’ and applies the function ’f’ on the content of each
node. Creates a new list resulting of the successive applications of the
function ’f’. The ’del’ function is used to delete the content of a node if
needed. */
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *));

#endif //LIBFT_H
