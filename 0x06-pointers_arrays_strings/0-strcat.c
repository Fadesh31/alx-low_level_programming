#include "main.h"

/**
 *  *_strcat - concatenates two strings
 *  @dest: pointer referencing the destion string
 *  @src: pointer referencing source string
 *  Return: void
 */

char *_strcat(char *dest, char *src)
{
	int count = -1, n;

	for (n = 0; dest[i] != '\0'; n++)
	;
	do {
		count++;
		dest[n] = src[count];
		n++;
	} while (src[count] != '\0');

	return (dest);
}
