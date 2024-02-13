#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(isalpha, caracterAlpha_1) {
	int c = 'C';
	ASSERT_EQ(ft_isalpha(c), 1);
}

TEST(isalpha, caracterAlpha_2) {
	int c = 'a';
	ASSERT_EQ(ft_isalpha(c), 1);
}

TEST(isalpha, caracterNoAlpha_1) {
	int c = '2';
	ASSERT_EQ(ft_isalpha(c), 0);
}

TEST(isalpha, caracterNoAlpha_2) {
	int c = -1;
	ASSERT_EQ(ft_isalpha(c), 0);
}
