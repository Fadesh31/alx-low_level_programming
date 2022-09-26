#include "main.h"

/**
 * _strstr - Locate a substring in a string
 * @haystack: The parent string
 * @needle: the subscring to find
 * Return: 0 or pointer to the begining of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *output = haystack;

	char *ptr_needle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (output);
		}
		needle = ptr_needle;
		output++;
		haystack = output;
	}

	return (0);
}
