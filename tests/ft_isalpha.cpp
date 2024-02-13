#include <gtest/gtest.h>

extern "C" {
    #include "../src/libft.h"
}

TEST(isalpha, caracterAlpha) {
    ASSERT_EQ(ft_isalpha('C'), 1);
}
