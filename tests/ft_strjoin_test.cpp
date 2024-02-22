#include <gtest/gtest.h>
#include <stdlib.h>

extern "C"
{
#include "../src/libft.h"
}

TEST(strjoin, str_1)
{
    char str_1[] = "Abc";
    char str_2[] = "ABC";
    char *result = ft_strjoin(str_1, str_2);
    ASSERT_STREQ(result, "AbcABC");
    free(result);
}

TEST(strjoin, str_2)
{
    char str_1[] = "";
    char str_2[] = "";
    char *result = ft_strjoin(str_1, str_2);
    ASSERT_STREQ(result, "");
    free(result);
}

TEST(strjoin, str_3)
{
    char str_1[] = "                  a";
    char str_2[] = "";
    char *result = ft_strjoin(str_1, str_2);
    ASSERT_STREQ(result, "                  a");
    free(result);
}
