#include <stdio.h>
/**
 * main - function to print it's name
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
