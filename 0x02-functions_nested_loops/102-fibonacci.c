#include <stdio.h>

/**
 * main - prints fibonacci numbers from 0 to 50
 *
 * Return: 0 if success
 */

int main(void)
{
	long int i, old_number, current_number, next_number;

	/* Initialize numbers to start sequence */
	old_number = 1;
	current_number = 1;
	i = 0;

	while (i < 50)
	{
		if (i == 49)
		{
			printf("%ld\n", current_number);
			break;
		}
		else
		{
			printf("%ld, ", current_number);
			next_number = old_number + current_number;

			old_number = current_number;
			current_number = next_number;

			i++;
		}
	}
	return (0);
}
