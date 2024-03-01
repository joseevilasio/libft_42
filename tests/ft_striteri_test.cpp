#include <gtest/gtest.h>
#include <string.h>

extern "C" {
	#include "../src/libft.h"
}

static void f(unsigned int n, char *s)
{
    if (s[n] >= 'a' && s[n] <= 'z')
        s[n] = s[n] - 32;
    else if (s[n] >= 'A' && s[n] <= 'Z')
        s[n] = s[n] + 32;
    else
        s[n] = '-';
}

TEST(striteri, str_1) {
	char str[] = "Hello, World!";
    char *result = ft_strdup(str);
    ft_striteri(result, &f);
	ASSERT_STREQ(result, "heLlO,-WOrLd-");
    free(result);
}

TEST(striteri, str_2) {
	char str[] = "";
    char *result = ft_strdup(str);
	ft_striteri(result, &f);
	ASSERT_STREQ(result, "");
    free(result);
}

TEST(striteri, str_3) {
	char str[] = "123456";
    char *result = ft_strdup(str);
	ft_striteri(result, &f);
	ASSERT_STREQ(result, "-2-4-6-");
    free(result);
}
