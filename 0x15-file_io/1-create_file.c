#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: null terminated string of text content to write to file
 *
 * Return: 1 on success or -1 on failure
 **/

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = strlen(text_content);

	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
