#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(l));
	printf("Sizef a long long int: %lu.\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
}
