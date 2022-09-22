#include "main.h"

/**
 * _strncat -conctenates two strigs
 * @dest: pointer referencing the destination string
 * @src: pointer referencing the source string
 * @n: number of bytes to pick
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
