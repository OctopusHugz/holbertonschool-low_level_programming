#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i, len;
	char *beg, *end, tmp;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}
	beg = s;
	end = s;

	for (i = 0; i < len - 1; i++)
	{
		end++;
	}

	/* swap chars until halfway */

	for (i = 0; i < len / 2; i++)
	{
		tmp = *beg;
		*beg = *end;
		*end = tmp;
		beg++;
		end--;
	}
}
