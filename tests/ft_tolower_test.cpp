#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(tolower, charLower) {
	char c = 'a';
	ASSERT_EQ(ft_tolower(c), 'a');
}

TEST(tolower, charUpper) {
	char c = 'A';
	ASSERT_EQ(ft_tolower(c), 'a');
}

TEST(tolower, charNoASCII) {
	char c = -1;
	ASSERT_EQ(ft_tolower(c), -1);
}
