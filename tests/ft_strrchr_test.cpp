#include <gtest/gtest.h>
#include <string.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(strrchr, str_1) {
	char str[] = "Hello, World!";
	ASSERT_STREQ(ft_strrchr(str, 'o' + 256), strrchr(str, 'o' + 256));
}

TEST(strrchr, str_2) {
	char str[] = "42 School";
	ASSERT_STREQ(ft_strrchr(str, 'o'), strrchr(str, 'o'));
}

TEST(strrchr, str_3) {
	char str[] = "Hello, World!";
	ASSERT_STREQ(ft_strrchr(str, '\0'), strrchr(str, '\0'));
}

TEST(strrchr, str_4) {
    char s[] = "tripouille";
	ASSERT_STREQ(ft_strrchr(s, 't' + 256), strrchr(s, 't' + 256));
}

