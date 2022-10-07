#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to be copied
 * Return: return pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *space;
	unsigned int length_1 = 0, length_2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[length_1] != '\0')
	{
		length_1++;
	}

	while (s2[length_2] != '\0')
	{
		length_2++;
	}

	if (n > length_2)
		n = length_2;
	space = malloc((length_1 + n + 1) * sizeof(char));

	if (space == NULL)
		return (0);

	for (i = 0; i < length_1; i++)
	{
		space[i] = s1[i];
	}

	for (; i < (length_1 + n); i++)
	{
		space[i] = s2[i - length_1];
	}

	space[i] = '\0';

	return (space);
}
