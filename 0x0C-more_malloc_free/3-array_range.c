#include "main.h"

/**
 * array_range - function to create integer array
 * @min: minimum value
 * @max: maximum value
 * Return: array pointer
 */
int *array_range(int min, int max)
{
	int *result, i = 0, temp = min;

	if (min > max)
		return (0);

	result = malloc((max - min + 1) * sizeof(int));

	if (!result)
		return (0);

	while (i <= max - min)
		result[i++] = temp++;

	return (result);
}
