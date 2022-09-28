#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - to check if the number is a prime number
 * @n: int parameter
 * @m: int parameter
 * Return: 0 or 1
 */
int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - Check if a number is a prime number
 * @n: int parameter
 * Return: recursion
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
