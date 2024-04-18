#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(lstnew, str_1) {
    t_list *duck = NULL;
    char *str = strdup("Hello!");
    duck = ft_lstnew(str);
	ASSERT_STREQ((char *)duck->content, str);
    free(str);
}

TEST(lstnew, str_2) {
    t_list *duck = NULL;
    char *str = strdup("12345");
    duck = ft_lstnew(str);
	ASSERT_STREQ((char *)duck->content, str);
    free(str);
}
