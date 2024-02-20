#include <gtest/gtest.h>
#include <string.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(strchr, str_1) {
	char str[] = "Hello, World!";
	ASSERT_STREQ(ft_strchr(str, 'o' + 256), strchr(str, 'o' + 256));
}

TEST(strchr, str_2) {
	char str[] = "42 School";
	ASSERT_STREQ(ft_strchr(str, 'o'), strchr(str, 'o'));
}

TEST(strchr, str_3) {
	char str[] = "Hello, World!";
	ASSERT_STREQ(ft_strchr(str, '\0'), strchr(str, '\0'));
}

TEST(strchr, str_4) {
    char s[] = "tripouille";
	ASSERT_STREQ(ft_strchr(s, 't' + 256), strchr(s, 't' + 256));
}

