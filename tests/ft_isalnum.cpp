#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(isalnum, caracterAlnum_1) {
	int c = '1';
	ASSERT_EQ(ft_isalnum(c), 1);
}

TEST(isalnum, caracterAlnum_2) {
	int c = 'a';
	ASSERT_EQ(ft_isalnum(c), 1);
}

TEST(isalnum, caracterNoAlnum_1) {
	int c = '@';
	ASSERT_EQ(ft_isalnum(c), 0);
}

TEST(isalnum, caracterNoAlnum_2) {
	int c = -1;
	ASSERT_EQ(ft_isalnum(c), 0);
}
