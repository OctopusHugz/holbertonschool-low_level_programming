#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the numbers from 1 to 100, printing Fizz if number
 * is divisible by 3 and printing Buzz if number is divisible by 5
 *
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz");
				printf(" ");
			}
			else
			{
				printf("Fizz");
				printf(" ");
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
}
