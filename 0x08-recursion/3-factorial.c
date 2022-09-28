#include "main.h"

/**
 * factorial - find factorial of n
 * @n: number
 * Return: 0, 1, or n * recurssive call
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
