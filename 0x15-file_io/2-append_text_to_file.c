#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append to
 * @text_content: null terminated string of text content to append
 *
 * Return: 1 on succeess, -1 on failure
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd && text_content == NULL)
		return (1);
	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);

	return (1);
}
