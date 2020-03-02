#include <stdio.h>

/**
 * main - prints fibonacci numbers from 0 to 50
 *
 * Return: 0 if success
 */

int main(void)
{
	long int old_number, current_number, next_number;

	/* Initialize numbers to start sequence */
	old_number = 1;
	current_number = 1;

	while (current_number < 4000000)
	{
		if (current_number % 2 == 0)
		{
			if (current_number > 3000000)
				printf("%ld\n", current_number);
			else
				printf("%ld, ", current_number);
		}
		next_number = old_number + current_number;

		old_number = current_number;
		current_number = next_number;
	}
	return (0);
}
