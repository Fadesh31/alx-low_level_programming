#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: initial size
 * @new_size: final size
 * Return: pointer to the final array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	copy = ptr;

	for (i = 0; i < old_size; i++)
		p[i] = copy[i];

	free(ptr);

	return (p);
}
