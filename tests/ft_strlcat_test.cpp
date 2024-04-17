#include <gtest/gtest.h>

extern "C"
{
#include "../src/libft.h"
}

// TEST(strlcat, checkReturn)
// {    
//     char *dest;
//     dest = (char *) malloc(12 * sizeof(char) + 1);
//     dest = "Hello ";
//     char src[8] = "World!";
//     ASSERT_EQ(ft_strlcat(dest, src, 7), 13);
//     // free(dest);
// }

// TEST(strlcat, checkConcatenate)
// {
//     char *dest;
//     dest = NULL;
//     dest = (char *) malloc(12 * sizeof(char) + 1);
//     char src[13] = "Hello World!";
//     int result = ft_strlcat(dest, src, 13);
//     ASSERT_EQ(result, 13);
//     ASSERT_STREQ(dest, src);
//     free(dest);
// }

// TEST(strlcat, checkConcatenatLimited)
// {
//     char *dest;
//     dest = (char *) malloc(6 * sizeof(char) + 1);
//     dest = "Hello ";
//     char src[13] = "Hello World!";
//     ft_strlcat(dest, src, 7);
//     ASSERT_STREQ(dest, "Hello "); 
//     free(dest);  
// }
