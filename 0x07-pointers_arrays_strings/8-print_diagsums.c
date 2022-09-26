#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the diagonals of 2 matrices
 * @a: the pointer to the matrix
 * @size: the size of the string
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i + i));
		sum2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
