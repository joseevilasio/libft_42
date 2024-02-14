#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(strlen, str_1) {
	char str[] = "abc";
	ASSERT_EQ(ft_strlen(str), 3);
}

TEST(strlen, str_2) {
	char str[] = "other";
	ASSERT_EQ(ft_strlen(str), 5);
}

TEST(strlen, str_3) {
	char str[] = "";
	ASSERT_EQ(ft_strlen(str), 0);
}
