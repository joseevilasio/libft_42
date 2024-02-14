#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(isascii, caracterASCII_1) {
	int c = 'C';
	ASSERT_EQ(ft_isascii(c), 1);
}

TEST(isascii, caracterASCII_2) {
	int c = '?';
	ASSERT_EQ(ft_isascii(c), 1);
}

TEST(isascii, caracterNoASCII_1) {
	int c = 178;
	ASSERT_EQ(ft_isascii(c), 0);
}

TEST(isascii, caracterNoASCII_2) {
	int c = -1;
	ASSERT_EQ(ft_isascii(c), 0);
}
