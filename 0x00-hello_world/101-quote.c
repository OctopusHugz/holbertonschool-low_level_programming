#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define STRING "and that piece of art is useful\" - Dora Korpar, 2015-10-19"

ssize_t write(int fd, const void *buf, size_t count);

/**
 * main - prints given string to the stderr
 * write - prints the given string to the specified destination
 * 'fd' is the file descriptor
 * '*buf' is the starting buffer
 * 'count' is the number of bytes to write
 * Return: 1
 */

int main(void)
{
	write(2, STRING, strlen(STRING));
	return (1);
}
