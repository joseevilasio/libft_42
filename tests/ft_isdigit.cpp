#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(isdigit, caracterDigit_1) {
	int c = '1';
	ASSERT_EQ(ft_isdigit(c), 1);
}

TEST(isdigit, caracterDigit_2) {
	int c = '9';
	ASSERT_EQ(ft_isdigit(c), 1);
}

TEST(isdigit, caracterNoDigit_1) {
	int c = 'a';
	ASSERT_EQ(ft_isdigit(c), 0);
}

TEST(isdigit, caracterNoDigit_2) {
	int c = -1;
	ASSERT_EQ(ft_isdigit(c), 0);
}
