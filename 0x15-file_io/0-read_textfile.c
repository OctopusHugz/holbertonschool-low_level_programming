#include "holberton.h"

/**
 * read_textfile -
 *
 * Return:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	count = read(fd, buf, letters);
	if (count == -1)
		return (0);
	buf[letters - 1] = '\0';
	if ((size_t)count != letters)
		count++;

	if ((size_t)write(STDOUT_FILENO, buf, letters) != letters)
		return (0);

	close(fd);

	return (count);
}
