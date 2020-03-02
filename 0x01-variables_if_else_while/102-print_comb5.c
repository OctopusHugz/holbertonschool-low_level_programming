#include <unistd.h>

/**
 * main - prints all possible combinations of 2 two digit numbers
 * @c: The character to print
 * Return: 0 if no errors
 */

int _putchar(char c);

int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (y > x)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				_putchar(' ');
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
				if (x == 98 && y == 99)
					break;
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	_putchar('\n');
	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
