#include <gtest/gtest.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(putchar_fd, array_1) {

	int fd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	char content[2];
    ft_putchar_fd('a', fd);
	ft_putchar_fd('\0', fd);
	read(fd, content, 2);
	ASSERT_EQ(strcmp(content, "a\0"), 0);
    close(fd);
    remove("/tests/temp");
}
