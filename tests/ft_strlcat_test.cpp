#include <gtest/gtest.h>

extern "C"
{
#include "../src/libft.h"
}

TEST(strlcat, checkReturn)
{    
    char *dest = NULL;
    dest = ft_strdup("a");

    char *src = NULL;
    src = ft_strdup("World!");

    ASSERT_EQ(ft_strlcat(dest, src, 1), 7);

    free(dest);
    free(src);
}

TEST(strlcat, checkConcatenate)
{
    char *dest = NULL;
    dest = (char *) malloc(12 * sizeof(char) + 1);
    ft_memset(dest, '\0', 13);
    char *src = NULL;
    src = ft_strdup("Hello World!");
    size_t result = ft_strlcat(dest, src, 13);
    ASSERT_STREQ(dest, src);

    free(dest);
    free(src);
}

TEST(strlcat, checkConcatenatLimited)
{
    char *dest = NULL;
    dest = ft_strdup("Hello ");

    char *src = NULL;
    src = ft_strdup("Hello World!");

    ASSERT_EQ(ft_strlcat(dest, src, 6), 18);
    ASSERT_STREQ(dest, "Hello ");

    free(dest); 
    free(src);
}
