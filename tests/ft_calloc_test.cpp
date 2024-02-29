#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(calloc, Test_1) {
    int size = 8539;
 	void * d1 = ft_calloc(size, sizeof(int));
 	void * d2 = calloc(size, sizeof(int));
	ASSERT_EQ(memcmp(d1, d2, size * sizeof(int)), 0);
 	free(d1);
 	free(d2);
}

 
