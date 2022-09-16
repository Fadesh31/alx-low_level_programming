#include "main.h"

/**
 * _isupper - checks if the input character is uppercase
 * @c: the ASCII equivalent of the character
 * Return: 1 if true 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
