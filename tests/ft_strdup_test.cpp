#include <gtest/gtest.h>
#include <stdlib.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(strdup, str_1) {
	char str_1[] = "     +-+-+-+-14587sb7881";
	ASSERT_STREQ(ft_strdup(str_1), str_1);
}

TEST(strdup, str_2) {
	char str_1[] = "++123";
	ASSERT_STREQ(ft_strdup(str_1), str_1);
}

TEST(strdup, str_3) {
	char str_1[] = "-5";
	ASSERT_STREQ(ft_strdup(str_1), str_1);
}
