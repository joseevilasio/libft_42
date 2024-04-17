#include <gtest/gtest.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include <limits.h>

extern "C" {
	#include "../src/libft.h"
}

TEST(putnbr_fd, str_1) {
	int fd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	char *content = (char *) malloc(100 * sizeof(char) + 1);
	char *str = strdup("-100");
    ft_putnbr_fd(-100, fd);
	ft_putchar_fd('\0', fd);
	close(fd);
	int fdd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	read(fdd, content, 100);
	ASSERT_EQ(strcmp(content, str), 0);
    close(fdd);
    remove("/tests/temp");
	free(content);
	free(str);
}

TEST(putnbr_fd, str_2) {
	int fd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	char *content = (char *) malloc(100 * sizeof(char) + 1);
	char *str = strdup("12345");

    ft_putnbr_fd(12345, fd);
	ft_putchar_fd('\0', fd);
	close(fd);

	int fdd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	read(fdd, content, 100);
	ASSERT_EQ(strcmp(content, str), 0);
    close(fdd);
    remove("/tests/temp");
	free(content);
	free(str);
}

TEST(putnbr_fd, str_4) {
	int fd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	char *content = (char *) malloc(100 * sizeof(char) + 1);
	char *str = strdup("2147483647");

    ft_putnbr_fd(INT_MAX, fd);
	ft_putchar_fd('\0', fd);

	close(fd);
	int fdd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	read(fdd, content, 100);
	ASSERT_EQ(strcmp(content, str), 0);
    close(fdd);
    remove("/tests/temp");
	free(content);
	free(str);
}

TEST(putnbr_fd, str_5) {
	int fd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	char *content = (char *) malloc(100 * sizeof(char) + 1);
	char *str = strdup("-2147483648");

    ft_putnbr_fd(INT_MIN, fd);
	ft_putchar_fd('\0', fd);

	close(fd);
	int fdd = open("./tests/temp", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	read(fdd, content, 100);
	ASSERT_EQ(strcmp(content, str), 0);
    close(fdd);
    remove("/tests/temp");
	free(content);
	free(str);
}
