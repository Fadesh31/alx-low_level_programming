#include "main.h"
/**
 * _abs - entry point
 * Description: prints absolute value of an integer
 * @n: n is an integer
 * Return: int
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
