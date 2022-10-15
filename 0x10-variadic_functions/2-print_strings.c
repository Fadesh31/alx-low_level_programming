#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - output string with new line
 * @separator: input string
 * @n: num of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list items;
	char *temp;

	va_start(items, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(items, char*);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(items);
}
