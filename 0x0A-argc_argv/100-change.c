#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments passed to function
 * @argv: array containing all arguments passed to function
 *
 * Return: number of coins to make change, if argc != 1, return 1
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int money = 0;
	/*
	int i, change, money, count;

	int cents[5] = {25, 10, 5, 2, 1};

	i = 0;
	count = 0;
	*/
	money = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (money < 0)
		printf("0\n");
	/*
	else
	{
		while(money != 0)
		{
			if (money >= cents[i])
			{
				change = money / cents[i];
				money = money % cents[i];
				count += change;
			}
			i++;
		}
	}
	printf("%d\n", count); */
	return (0);
}
