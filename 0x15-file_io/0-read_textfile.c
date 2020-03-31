#include "holberton.h"

/**
 * read_textfile - reads text from a file and prints to POSIX STDOUT
 * @filename: file to read text from
 * @letters: number of letters to read from file
 *
 * Return: number of letters printed from file, or 0 if errors
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	count = read(fd, buf, letters);
	if (count == -1)
	{
		free(buf);
		return (0);
	}

	buf[letters - 1] = '\0';
	if ((size_t)count != letters)
		count++;

	if ((size_t)write(STDOUT_FILENO, buf, letters) != letters)
	{
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (count);
}
