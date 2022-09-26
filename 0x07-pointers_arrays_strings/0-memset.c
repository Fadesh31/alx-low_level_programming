#include "main.h"

/**
 * *_memset - stores n bytes of memory with a constant value
 * @s: pointer to the memory areaa
 * @n: number of bytes to store
 * @b: constant value
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}

	return (s);
}
