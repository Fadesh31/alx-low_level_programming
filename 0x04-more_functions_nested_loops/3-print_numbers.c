#include "main.h"
/*
 * print_numbers - prints the numbers, from 0 to 9
 * Constraint - Can only use _putchar twice
 * Return: void
 */
void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
