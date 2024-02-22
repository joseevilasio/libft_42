#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(calloc, Test_1) {
    int size = 8539;
 	void * d1 = ft_calloc(size, sizeof(int));
 	void * d2 = calloc(size, sizeof(int));
	EXPECT_TRUE(memcmp(d1, d2, size * sizeof(int)));
 	free(d1);
 	free(d2);
}

 
