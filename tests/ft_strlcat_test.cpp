#include <gtest/gtest.h>

extern "C"
{
#include "../src/libft.h"
}

TEST(strlcat, checkReturn)
{
    char dest[13] = "Hello ";
    char src[13] = "World!";
    ASSERT_EQ(ft_strlcat(dest, src, 7), 12);
}

TEST(strlcat, checkConcatenate)
{
    char dest[13];
    char src[13] = "Hello World!";
    ft_strlcat(dest, src, 13);
    ASSERT_STREQ(dest, src);
}

TEST(strlcat, checkConcatenatLimited)
{
    char dest[7] = "Hello ";
    char src[13] = "Hello World!";
    ft_strlcat(dest, src, 7);
    ASSERT_STREQ(dest, "Hello ");
}
