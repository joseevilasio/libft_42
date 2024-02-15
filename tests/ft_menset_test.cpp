#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(menset, str_1) {
	int array[4] = {1, 2, 3, 4};
	int array_result[4] = {'0', '0', '0', '0'};
	ft_menset(&array, 0, 4);
	ASSERT_EQ(array[0], array_result[0]);
}

// TEST(menset, str_2) {
// 	char str[] = "other";
// 	ASSERT_EQ(ft_menset(str), 5);
// }

// TEST(menset, str_3) {
// 	char str[] = "";
// 	ASSERT_EQ(ft_menset(str), 0);
// }
