#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(strnstr, str_1) {
	char str_1[] = "The strcasestr() function is similar to strstr(), but ignores the  case of both strings.";
	char find[] = "ignores";
	ASSERT_STREQ(ft_strnstr(str_1, find, sizeof(str_1)), "ignores the  case of both strings.");
}

TEST(strnstr, str_2) {
	char str_1[] = "The strcasestr() function is similar to strstr(), but ignores the  case of both strings.";
	char find[] = "Banana";
	ASSERT_EQ(ft_strnstr(str_1, find, sizeof(str_1)), (void *) 0);
}

TEST(strnstr, str_3)
{
	char str_1[] = "The strcasestr() function is similar to strstr(), but ignores the  case of both strings.";
	char find[] = "";
	ASSERT_STREQ(ft_strnstr(str_1, find, sizeof(str_1)), str_1);
}
