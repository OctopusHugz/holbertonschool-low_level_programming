#include <stdio.h>

/**
 * main - pritns the name of the file it was compiled from, followed by newline
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
