#include "main.h"

/**
 * _strchr - prints the character c if found
 * @s: string
 * @c: char paramaters to be found
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
