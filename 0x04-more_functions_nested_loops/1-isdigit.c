#include "main.h"

/**
 * _isdigit - Checks if the character is a digit
 * @c: int to be checked
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
