#include <gtest/gtest.h>
#include <string.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(split, str_1) {
	char str[] = "Hello, World!";
	char **tab = ft_split(str, ',');
	ASSERT_STREQ(tab[0], "Hello");
	ASSERT_STREQ(tab[1], " World!");
	free(tab);
}

TEST(split, str_2) {
	char str[] = "42 School";
	char **tab = ft_split(str, ' ');
	ASSERT_STREQ(tab[0], "42");
	ASSERT_STREQ(tab[1], "School");
	free(tab);
}

TEST(split, str_3) {
	char str[] = "Hello";
	char **tab = ft_split(str, ' ');
	ASSERT_STREQ(tab[0], "Hello");
	free(tab);
}
