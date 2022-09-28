#include "main.h"
/**
 * _pow_recursion - Recurssion Power
 * @x: The base number
 * @y: Power of the base number
 * Return: 0, 1 or x * recurssive call
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
