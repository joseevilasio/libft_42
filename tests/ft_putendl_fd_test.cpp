#include <gtest/gtest.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>


extern "C" {
	#include "../src/libft.h"
}

TEST(putendl_fd, str_1) {
	int fd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	char *content = (char *) malloc(100 * sizeof(char) + 1);
	char *str = strdup("123456789\n");
	char *test = strdup("123456789");

    ft_putendl_fd(test, fd);
	ft_putchar_fd('\0', fd);

	close(fd);
	int fdd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	read(fdd, content, 100);
	ASSERT_EQ(strcmp(content, str), 0);
    close(fdd);
    remove("/tests/temp");
	free(content);
	free(str);
	free(test);
}

TEST(putendl_fd, str_2) {
	int fd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	char *content = (char *) malloc(100 * sizeof(char) + 1);
	char *str = strdup("Hello World!\n");
	char *test = strdup("Hello World!");

    ft_putendl_fd(test, fd);
	ft_putchar_fd('\0', fd);

	close(fd);
	int fdd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	read(fdd, content, 100);
	ASSERT_EQ(strcmp(content, str), 0);
    close(fdd);
    remove("/tests/temp");
	free(content);
	free(str);
	free(test);
}
