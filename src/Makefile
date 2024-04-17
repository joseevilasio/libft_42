.PHONY: all $(NAME) clean fclean re bonus

NAME := libft.a
SOURCE := $(wildcard *.c)
SOURCE := $(filter-out %ft_lst%.c, $(SOURCE))
BONUS_SOURCE :=  $(filter %ft_lst%.c, $(SOURCE))
OBJECTS := $(SOURCE:.c=.o)
BONUS_OBJECTS := $(BONUS_SOURCE:.c=.o)
FLAGS := cc -Wall -Wextra -Werror -g -std=c99

all:	$(NAME)

%.o: %.c
	$(FLAGS) -c $< -o $@

$(BONUS_OBJECTS):	$(BONUS_SOURCE)
	$(FLAGS) -c $< -o $@

$(NAME):	$(OBJECTS)
	@ar rcs $(NAME) *.o

bonus:	$(BONUS_OBJECTS)
	ar rcs $(NAME) $^

clean:
	@rm -f *.o

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
