#include <gtest/gtest.h>
#include <string.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(memcmp, str_1) {
	char s1[] = "Hello, World!";
	char s2[] = "Hella";
	ASSERT_EQ(ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5));
}

TEST(memcmp, str_2) {
	char s1[] = "Hello, World!";
	char s2[] = "Hella";
	ASSERT_EQ(ft_memcmp(s1, s2, 0), memcmp(s1, s2, 0));
}

TEST(memcmp, str_3) {
	char s1[] = "Hello, World!";
	char s2[] = "";
	ASSERT_EQ(ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5));
}

TEST(memcmp, str_4) {
    char s1[] = "Hello, World!";
	char s2[] = "Hello, World!";
	ASSERT_EQ(ft_memcmp(s1, s2, 14), memcmp(s1, s2, 14));
}

TEST(memcmp, str_5) {
    char s1[] = "Hello, World!";
	char s2[] = "Other";
	ASSERT_EQ(ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5));
}

