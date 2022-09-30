#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrrence of a string
 * @s: char pointer
 * @accept: char pointer
 * Return: Null or Returns a pointer to the byte found
 */
char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
