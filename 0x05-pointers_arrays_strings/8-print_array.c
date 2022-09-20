#include "main.h"
#include <stdio.h>

/**
 * print_array -prints n elements of an array of integers
 * @a: the arry pointer
 * @n: the pointer indicating the value of n
 * Constraints: Numbers must be seprated by comma then followed by a space
 * Numbers should be displayed in the smae order they are stored in array.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
