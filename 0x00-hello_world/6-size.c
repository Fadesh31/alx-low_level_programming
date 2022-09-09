#include <stdio.h>
/**
 * main - Prints 'Size of different variables with various types'
 * return: ALways 0 (success)
 */
int main(void)
{
	int i;
	char c;
	float d;
	long int l;
	long long int ll;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", sizeof(d));
	return (0);
}	
	
