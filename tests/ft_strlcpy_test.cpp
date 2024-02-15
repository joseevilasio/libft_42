#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(strlcpy, checkReturn) {
	char dest[13];
    char src[13] = "Hello World!";
	ASSERT_EQ(ft_strlcpy(dest, src, 13), 12);
}

TEST(strlcpy, checkCopy) {
	char dest[13];
    char src[13] = "Hello World!";
    ft_strlcpy(dest, src, 13);
	ASSERT_STREQ(dest, src);
}

TEST(strlcpy, checkCopyLimited) {
	char dest[13];
    char src[13] = "Hello World!";
    ft_strlcpy(dest, src, 4);
	ASSERT_STREQ(dest, "Hel");
}
