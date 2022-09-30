#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
