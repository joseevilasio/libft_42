#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(lstclear, str_1) {
    t_list *duck = NULL;
    t_list *cat = NULL;
    t_list *dog = NULL;
    t_list *garden = NULL;

    char *str_duck = strdup("quack!");
    char *str_cat = strdup("miau!");
    char *str_dog = strdup("auau!");
    
    duck = ft_lstnew(str_duck);
    cat = ft_lstnew(str_cat);
    dog = ft_lstnew(str_dog);

    ft_lstadd_front(&garden, dog);
    ft_lstadd_front(&garden, cat);
    ft_lstadd_front(&garden, duck);

    ft_lstclear(&garden, free);
    
    EXPECT_EQ(garden, nullptr);
}
