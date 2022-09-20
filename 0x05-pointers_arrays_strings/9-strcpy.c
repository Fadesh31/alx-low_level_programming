#include "main.h"

/**
 * *_strcpy - makes a copy of the string at src
 * @dest: pointer to the source string
 * @src: pointer to the destination string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do{
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
