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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i] = '\0';

	return (dest);
}
