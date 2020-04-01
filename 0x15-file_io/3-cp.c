#include "holberton.h"
#define E_98 (exit(98))

/**
 * main - copies the contents of a file to another file
 * @argc: number of arguments provided at command line
 * @argv: pointer to an array of strings containing CL args
 *
 * Return: 0 if success, -1 otherwise
 **/

int main(int argc, char *argv[])
{
	int fd, fd_two, rd = 10, wr;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), E_98;
	fd_two = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_two == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (rd > 0)
	{
		rd = read(fd, buf, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), E_98;
		if (rd > 0)
		{
			wr = write(fd_two, buf, rd);
			if (wr == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	if (close(fd_two) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_two), exit(100);
	return (0);
}
