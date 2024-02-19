#include <gtest/gtest.h>
#include <string.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(memcpy, str_1) {
	char dest[6];
	char dest_check[6];
	char src[6] = "Hello";
	ft_memcpy(dest, src, 6);
	memcpy(dest_check, src, 6);
	ASSERT_STREQ(dest, dest_check);
}

TEST(memcpy, str_2) {
	char dest[12] = "Other text";
	char dest_check[12] = "Other text";
	char src[20] = "Hello World";
	ft_memcpy(dest, src, 3);
	memcpy(dest_check, src, 3);
	ASSERT_STREQ(dest, dest_check);
}
