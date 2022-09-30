#include <stdio.h>
/**
 * main - function to print it's args
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
