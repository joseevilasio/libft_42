#include <gtest/gtest.h>
#include <string.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(memchr, str_1) {
	char str[] = "Hello, World!";
	ASSERT_EQ(ft_memchr(str, 'o' + 256, 6), memchr(str, 'o' + 256, 6));
}

TEST(memchr, str_2) {
	char str[] = "42 School";
	ASSERT_EQ(ft_memchr(str, 'o', 6), memchr(str, 'o', 6));
}

TEST(memchr, str_3) {
	char str[] = "Hello, World!";
	ASSERT_EQ(ft_memchr(str, '\0', 14), memchr(str, '\0', 14));
}

TEST(memchr, str_4) {
    char s[] = "tripouille";
	ASSERT_EQ(ft_memchr(s, 't' + 256, 11), memchr(s, 't' + 256, 11));
}

TEST(memchr, str_5) {
    char s[] = {0, 1, 2 ,3 ,4 ,5};
	ASSERT_EQ(ft_memchr(s, 2, 3), memchr(s, 2, 3));
}

