#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(lstdelone, str_1) {

    t_list *duck = NULL;
    char *str_duck = strdup("quack!");

    duck = ft_lstnew(str_duck);

    ft_lstdelone(duck, free);

	EXPECT_TRUE(duck->content);
    EXPECT_TRUE(duck);
}