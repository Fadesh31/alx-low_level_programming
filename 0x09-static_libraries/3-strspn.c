#include "main.h"

/**
 * _strspn - gets the length of the prefix substring
 * @s: the search string
 * @accept: acceptablecharacters
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr_accept = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				count++;
				break;
			}
		if (!(*--accept))
			break;
		accept = ptr_accept;
	}

	return (count);
}
