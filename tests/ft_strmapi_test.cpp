#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

static char f(unsigned int n, char c)
{
    return (c + n);
}

TEST(strmapi, str_1) {
	char str[] = "abc";
    char *result = ft_strmapi(str, f);
	ASSERT_STREQ(result, "ace");
    free(result);
}

TEST(strmapi, str_2) {
	char str[] = "123";
    char *result = ft_strmapi(str, f);
	ASSERT_STREQ(result, "135");
    free(result);
}

TEST(strmapi, str_3) {
	char str[] = "";
    char *result = ft_strmapi(str, f);
	ASSERT_STREQ(result, "");
    free(result);
}
