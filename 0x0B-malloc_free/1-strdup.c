#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to new memory
 * @str: string to be copied
 * Return: pointer to be duplicated or NULLif error
 */
char *_strdup(char *str)
{
	unsigned int i, n;
	char *s;

	if (str == NULL)
		return (NULL);
	i =  0;
	while (str[i] != '\0')
	{
		;
		i++;
	}
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
