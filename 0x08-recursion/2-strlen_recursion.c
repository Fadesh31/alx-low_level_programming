#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: pointer to the string
 * Return: 0 or 1 plus a recurssive call
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
