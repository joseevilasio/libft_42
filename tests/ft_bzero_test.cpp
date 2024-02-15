#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(bzero, array_1) {
	char array[4];
	ft_bzero(&array, 4);
	ASSERT_EQ(array[0], 0);
}

TEST(bzero, array_2) {
	char array[4];
	ft_bzero(&array, 4);
	ASSERT_EQ(array[3], 0);
}
