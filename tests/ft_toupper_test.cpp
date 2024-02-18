#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(toupper, charLower) {
	char c = 'a';
	ASSERT_EQ(ft_toupper(c), 'A');
}

TEST(toupper, charUpper) {
	char c = 'A';
	ASSERT_EQ(ft_toupper(c), 'A');
}

TEST(toupper, charNoASCII) {
	char c = -1;
	ASSERT_EQ(ft_toupper(c), -1);
}
