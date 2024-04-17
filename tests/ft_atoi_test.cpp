#include <gtest/gtest.h>
#include <stdlib.h>
#include <limits.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(atoi, str_1) {
	char str_1[] = "     +-+-+-+-14587sb7881";
	ASSERT_EQ(ft_atoi(str_1), atoi(str_1));
}

TEST(atoi, str_2) {
	char str_1[] = "++123";
	ASSERT_EQ(ft_atoi(str_1), atoi(str_1));
}

TEST(atoi, str_3) {
	char str_1[] = "-5";
	ASSERT_EQ(ft_atoi(str_1), atoi(str_1));
}
