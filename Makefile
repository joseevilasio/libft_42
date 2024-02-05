.PHONY: all $(NAME) clean fclean re

NAME := libft.a

all:	$(NAME)

obj_files.o:
	@for file_source in ./*.c; do \
		file_obj="./$$(basename $${file_source%.c}).o"; \
		cc -Wall -Wextra -Werror -g -c "$${file_source}" -o "$${file_obj}"; \
	done

$(NAME):	obj_files.o
	@ar rcs ./libft.a ./*.o

clean:
	@find ./ -name '*.o' -exec rm -f {} \;

fclean:	clean
	@find ./ -name '*.out' -exec rm -f {} \;
	@find ./ -name '*.a' -exec rm -f {} \;
	@find ./ -name '$(NAME)' -exec rm -f {} \;	

re:	fclean all

tests:	fclean $(NAME)
	@./tests/make ft_unitytest
