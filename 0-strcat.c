#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to the string to be appended
 * @src: pointer to the appending string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char srt1[10], str2[10];

	while (str1[i] != '\0')
	{
		i++;
	}
	while (srt2[j] != '\0')
	{
		str1[i++] = str2[j++];
	}
	str1[i] = '\0';

	return (dest);
}
