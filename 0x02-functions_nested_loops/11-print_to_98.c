#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers
 * @n: starting integer
 * Description: prints all natural number from n tom98
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			prntf("%d,", n);
			n--;
		}
	}
	printf("98\n");
}
