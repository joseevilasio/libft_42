#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

static void ft_encrypt(void *ptr)
{
    char *str = (char *) ptr;
    int i = 0
    while (str[i])
    {
        str[i] = str[i] + 1;
        i++;
    }
}

TEST(lstiter, str_1) {
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

    ft_lstiter(garden, ft_encrypt);

	ASSERT_STREQ((char *)garden->content, str_duck);
    garden = garden->next;
    ASSERT_STREQ((char *)garden->content, str_cat);
    garden = garden->next;
    ASSERT_STREQ((char *)garden->content, str_dog);

    free(str_cat);
    free(str_dog);
    free(str_duck);
}
