#include "main.h"

/**
 * _memset - function to copy character
 * @s: string input
 * @b: character input
 * @n: number of bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}

	return (s);
}

/**
 * _calloc - memory allocation using malloc
 * @nmemb: number of elements
 * @size: number of bytes per element
 * Return: pointer to the result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);

	_memset(result, 0, (nmemb * size));

	return (result);
}
