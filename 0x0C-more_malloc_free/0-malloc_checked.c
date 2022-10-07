#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * using malloc
 * @b: the number of buyes to allocate
 * Return: 98 or pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);

	if (space == NULL)
		exit(98);

	return (space);
}
