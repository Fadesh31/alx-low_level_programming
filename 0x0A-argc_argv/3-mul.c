#include <stdio.h>
#include <stdlib.h>

/**
 * main - Returns the product of 2 integers
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);

	return (0);
}
