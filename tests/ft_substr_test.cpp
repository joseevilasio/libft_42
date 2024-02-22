#include <gtest/gtest.h>
#include <stdlib.h>

extern "C"
{
#include "../src/libft.h"
}

TEST(substr, str_1)
{
    char str_1[] = "The strcasestr() function is similar to strstr(), but ignores the  case of both strings.";
    char *result = ft_substr(str_1, 3, 13);
    ASSERT_STREQ(result, " strcasestr()");
    free(result);
}

TEST(substr, str_2)
{
    char str_1[] = "The strcasestr() function is similar to strstr(), but ignores the  case of both strings.";
    char *result = ft_substr(str_1, 0, 89);
    ASSERT_STREQ(result, str_1);
    free(result);
}

TEST(substr, str_3)
{
    char str_1[] = "lorem ipsum dolor sit amet";
    char *result = ft_substr(str_1, 0, 11);
    ASSERT_STREQ(result, "lorem ipsum");
    free(result);
}
