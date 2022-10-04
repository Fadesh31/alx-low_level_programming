#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size, l;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	size = i + j + 1;
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		s[l] = s1[l];
	for (l = 0; l < 0; l++)
		s[l + i] = s2[l];
	s[i + j] = '\0';
	return (s);
}
