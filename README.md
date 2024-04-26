# Libft
My very first library in C. Project is part of the course of 42 school.
The library was designed to have functions similar to standard C libraries that aim to manipulate strings, handle structs, pointers, and memory allocation.

🚩 *Subject version 16.1*.

## Compile
To compile the library, simply use the makefile targets on the command line within the 'src' folder.
```
./src/make libft.a
```

## Tests
My tests were conducted using GTest. The prerequisites are to have CMake installed on your machine and to have already compiled the library.
```
./cmake -S . -B build && cmake --build build && ./build/all_tests
```
or run the tests in a docker container.
```
./make build && make run
```
in container bash execute
```
./make tester
```

In addition to my own tests, tests were conducted using the [Francinette](https://github.com/xicodomingues/francinette) tool for the library, its possible run the tests in a docker container.

## Libft Part 1 Status
| Function | Status | Norminette | Francinette | My own test - Gtest | Moulinette
| --- | --- | --- | --- |--- | --- |
| ft_isalpha | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_isdigit | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_isalnum | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_isascii | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_isprint | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_strlen | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_memset | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_bzero | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_memcpy | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_memmove | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_strlcpy | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_strlcat | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_toupper | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_tolower | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_strchr | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_strrchr | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_strncmp | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_memchr | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_memcmp | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_strnstr | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_atoi | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_calloc | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_strdup | ✅ | ✅ | ✅ | ✅ | ✅ |

## Libft Part 2 Status
| Function | Status | Norminette | Francinette | My own test - Gtest | Moulinette
| --- | --- | --- | --- |--- | --- |
| ft_substr | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_strjoin | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_strtrim | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_split | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_itoa | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_strmapi | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_striteri | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_putchar_fd | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_putstr_fd | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_putendl_fd | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_putnbr_fd | ✅ | ✅ | ✅ | ✅ | ✅ |

## Libft Bonus Status
| Function | Status | Norminette | Francinette | My own test - Gtest | Moulinette
| --- | --- | --- | --- |--- | --- |
| ft_lstnew | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_lstadd_front | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_lstsize | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_lstlast | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_lstadd_back | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_lstdelone | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_lstclear | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_lstiter | ✅ | ✅ | ✅ | ✅ | ✅ |
| ft_lstmap | ✅ | ✅ | ✅ | ✅ | ✅ |
