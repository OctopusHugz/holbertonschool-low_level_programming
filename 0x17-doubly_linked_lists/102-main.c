#include <stdio.h>

/**
 * main - finds the largest palindrome
 * that's the product of two 3 digit numbers
 *
 * Return: 0 if success
 **/

int main(void)
{
	int a, b, result = 0;
	int first, last, second, slast, third, tlast;

	a = 900;
	b = 900;

	while (a < 1000 && b < 1000)
	{
		result = a * b;
		first = result / 100000;
		second = (result / 10000) % 10;
		third = (result / 1000) % 10;
		last = result % 10;
		slast = (result % 100) / 10;
		tlast = (result % 1000) / 100;
		if (first == last && second == slast && third == tlast)
		{
			printf("%d = %d * %d\n", result, a, b);
			printf("Largest palindrome is: %d\n", result);
		}
		b++;
		if (b == 1000)
		{
			a++;
			b = 990;
			continue;
		}
	}
	return (0);
}
