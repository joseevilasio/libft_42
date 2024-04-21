#include <gtest/gtest.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(putchar_fd, char_1) {

	int fd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	char *content = (char *) malloc(1 * sizeof(char) + 1);
	char *str = strdup("a");

    ft_putchar_fd('a', fd);
	ft_putchar_fd('\0', fd);

	close(fd);

	int fdd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	read(fdd, content, 2);
	ASSERT_EQ(strcmp(content, str), 0);
    close(fdd);
    remove("./tests/temp");
	free(content);
	free(str);
}

TEST(putchar_fd, char_2) {
	int fd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	char *content = (char *) malloc(4 * sizeof(char) + 1);
	char *str = strdup("a1z\n");

    ft_putchar_fd('a', fd);
	ft_putchar_fd('1', fd);
	ft_putchar_fd('z', fd);
	ft_putchar_fd('\n', fd);
	ft_putchar_fd('\0', fd);
	
	close(fd);

	int fdd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	read(fdd, content, 5);
	ASSERT_EQ(strcmp(content, str), 0);
    close(fdd);
    remove("./tests/temp");
	free(content);
	free(str);
}
