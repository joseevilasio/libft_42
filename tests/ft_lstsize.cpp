#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(lstsize, str_1) {
    t_list *duck;
    t_list *cat;
    t_list *dog;
    t_list *home;
    char *str_duck = strdup("quack!");
    char *str_cat = strdup("miau!");
    char *str_dog = strdup("auau!");
    duck = ft_lstnew(str_duck);
    cat = ft_lstnew(str_cat);
    dog = ft_lstnew(str_dog);

    ft_lstadd_front(&home, dog);

    ASSERT_EQ(ft_lstsize(home), 1);

    ft_lstadd_front(&home, cat);

    ASSERT_EQ(ft_lstsize(home), 2);

    ft_lstadd_front(&home, duck);

    ASSERT_EQ(ft_lstsize(home), 3);

    free(str_cat);
    free(str_dog);
    free(str_duck);
}
