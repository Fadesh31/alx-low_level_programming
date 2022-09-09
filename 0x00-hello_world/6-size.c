#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i;
	long int l;
	long int ll
	float d;
	char c;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size if a long int: %lu byte(s)\n", sizeof(l) );
	printf("Size of a long long int: %lu byte(s)\n", sizof(ll));
	printf("Size of a float: %lu byte(s)\n", sizeof(d));
	return (0);
}
