#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(lstlast, str_1) {
    t_list *duck;
    t_list *cat;
    t_list *dog;
    t_list *room;
    t_list *last = (t_list *) malloc(1 * sizeof(t_list));

    char *str_duck = strdup("quack!");
    char *str_cat = strdup("miau!");
    char *str_dog = strdup("auau!");

    duck = ft_lstnew(str_duck);
    cat = ft_lstnew(str_cat);
    dog = ft_lstnew(str_dog);

    ft_lstadd_front(&room, dog); //last
    ft_lstadd_front(&room, cat);
    ft_lstadd_front(&room, duck);

    last = ft_lstlast(room);

	ASSERT_STREQ((char *)last->content, str_dog);

    free(str_cat);
    free(str_dog);
    free(str_duck);
} 
