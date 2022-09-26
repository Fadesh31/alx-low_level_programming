#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area
 * pointed to by s with constant
 * @s: pointer to the memory area
 * @n: number of bytes
 * @b: target data
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
