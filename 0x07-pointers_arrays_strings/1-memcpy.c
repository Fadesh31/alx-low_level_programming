#include "main.h"

/**
 * _memcpy - copies n bytes from src pointer to dest pointer
 * @dest: pointer to copy into
 * @src: pointer to be copied from
 * @n: six of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i: < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
