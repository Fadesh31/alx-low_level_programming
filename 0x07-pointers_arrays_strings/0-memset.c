#include "main.h"

/**
 * *_memset - stores n bytes of memory with a constant value
 * @s: pointer to the memory areaa
 * @n: number of bytes to store
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n);
{
	int size = n;

	if (size > 0)
	{
	int i;

	for (i = 0; i < size; i++)
	s[i]= b;
	}

	return (s);
}
