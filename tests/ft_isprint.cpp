#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(isprint, caracterPrint_1) {
	int c = 'a';
	ASSERT_EQ(ft_isprint(c), 1);
}

TEST(isprint, caracterPrint_2) {
	int c = '9';
	ASSERT_EQ(ft_isprint(c), 1);
}

TEST(isprint, caracterNoPrint_1) {
	int c = 7;
	ASSERT_EQ(ft_isprint(c), 0);
}

TEST(isprint, caracterNoPrint_2) {
	int c = 127;
	ASSERT_EQ(ft_isprint(c), 0);
}
