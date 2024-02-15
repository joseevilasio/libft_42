#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(memset, array_1) {
	char array[4];
	ft_memset(&array, 'a', 4);
	ASSERT_EQ(array[0], 'a');
}

TEST(memset, array_2) {
	char array[4];
	ft_memset(&array, 'z', 4);
	ASSERT_EQ(array[3], 'z');
}
