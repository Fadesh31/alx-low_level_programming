#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum up all args
 * @n: number of params
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	va_list list;
	int sum;

	va_start(list, n);

	for (count = 0, sum = 0; count < n; count++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
