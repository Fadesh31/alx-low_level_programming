#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i;
	long int l;
	long int ll;
	float d;
	char c;

	printf("Size of a char: %lu.\n",(unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n",(unsigned long)sizeof(i));
	printf("Size if a long int: %lu.\n",(unsigned long)sizeof(l) );
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(d));
	return (0);
}
