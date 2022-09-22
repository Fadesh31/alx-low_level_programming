#include "main.h"

/**
 *  *_strcat - concatenates two strings
 *  @dest: pointer referencing the destion string
 *  @src: pointer referencing source string
 *  Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
