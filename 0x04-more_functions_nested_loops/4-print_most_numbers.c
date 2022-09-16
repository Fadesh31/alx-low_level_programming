#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Constraints - Do not print 2 and 4, Use _putchar only twice
 * Return: 0
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
		n++;
	}

	_putchar('\n');
}
