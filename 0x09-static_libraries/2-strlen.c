#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 * Return: int lenght of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
