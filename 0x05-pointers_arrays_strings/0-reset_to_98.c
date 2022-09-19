#include "main.h"

/**
 * main - dereferencing pointers
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 402;
	p = &n;

	_putchar("Value of 'n': %d\n", n);
	_putchar("Address of 'n': %p\n", &n);
	_putchar("Value of 'p': %p\n", p);
	*p = 98;
	_putchar("Value of 'n': %d\n", n);

	return (0);
}
