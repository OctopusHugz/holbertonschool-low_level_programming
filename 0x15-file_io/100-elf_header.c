#include "holberton.h"

/**
 * main - displays the information contained in
 * the ELF header at the start of an ELF file
 * @argc: number of arguments provided at command line
 * @argv: pointer to an array of strings containing CL args
 *
 * Return: 0 if success, -1 otherwise
 **/

int main(int argc, char *argv[])
{
	int fd, rd = 10, wr, class, data;
	char buf[1024];

	if (argc != 2)
		return (-1);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	while (rd > 0)
	{
		rd = read(fd, buf, 1024);
		if (rd == -1)
			return (-1);
		printf("ELF Header:\n");

		printf("  Magic: %x %x %x %x %.2x %.2x\n", buf[EI_MAG0], buf[EI_MAG1], buf[EI_MAG2], buf[EI_MAG3], buf[4], buf[5]);

		class = buf[EI_CLASS];
		if (class == 2)
			printf("  Class: %32s", "ELF64\n");

		data = buf[EI_DATA];
		if (data == 1)
			printf("  Data: %57s", "2's complement, little endian\n");
		printf("  Version: %25d (current)\n", buf[EI_VERSION]);
		printf("  OS/ABI: %d\n", buf[EI_OSABI]);
		if (rd > 0)
		{
			wr = write(fd, buf, rd);
			if (wr == -1)
				return (-1);
		}
	}
	return (0);
}
