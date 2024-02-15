#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(strncmp, str_1) {
	char str_1[] = "abc";
	char str_2[] = "abc";
	ASSERT_EQ(ft_strncmp(str_1, str_2, 3), 0);
}

TEST(strncmp, str_2) {
	char str_1[] = "abA";
	char str_2[] = "aba";
	ASSERT_EQ(ft_strncmp(str_1, str_2, 3), -32);
}

TEST(strncmp, str_3) {
	char str_1[] = "abc";
	char str_2[] = "abc";
	ASSERT_EQ(ft_strncmp(str_1, str_2, 1), 0);
}
