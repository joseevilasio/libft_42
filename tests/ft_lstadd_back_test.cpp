#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(lstadd_back, str_1) {
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

    ft_lstadd_back(&garden, dog);
    ft_lstadd_back(&garden, cat);
    ft_lstadd_back(&garden, duck);

	ASSERT_STREQ((char *)garden->content, str_dog);
    garden = garden->next;
    ASSERT_STREQ((char *)garden->content, str_cat);
    garden = garden->next;
    ASSERT_STREQ((char *)garden->content, str_duck);

    free(str_cat);
    free(str_dog);
    free(str_duck);
}