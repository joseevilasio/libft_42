#include <gtest/gtest.h>
#include <string.h>
#include <climits>

extern "C" {
	#include "../src/libft.h"
}

TEST(itoa, str_1) {
	int c = INT_MIN;
	char *tab = ft_itoa(c);
	ASSERT_STREQ(tab, "-2147483648");
	free(tab);
}

TEST(itoa, str_2) {
	int c = INT_MAX;
	char *tab = ft_itoa(c);
	ASSERT_STREQ(tab, "2147483647");
	free(tab);
}

TEST(itoa, str_3) {
	int c = 0;
	char *tab = ft_itoa(c);
	ASSERT_STREQ(tab, "0");
	free(tab);
}
