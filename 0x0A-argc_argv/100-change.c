#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints the min number of coins
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int amount, count;

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (amount % 25 >= 0)
	{
		count += amount / 25;
		amount = amount % 25;
	}
	if (amount % 10 >= 0)
	{
		count += amount / 10;
		amount = amount % 10;
	}
	if (amount % 5 >= 0)
	{
		count += amount / 5;
		amount = amount % 5;
	}
	if (amount % 2 >= 0)
	{
		count += amount / 2;
		amount = amount % 2;
	}
	if (amount % 1 >= 0)
	{
		count += amount / 1;
	}
	printf("%d\n", count);
	return (0);
}
