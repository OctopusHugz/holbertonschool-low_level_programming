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
	int fd, rd, wr;
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

	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, rd);

	if (wr == -1)
	{
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (wr);
}
