#include "main.h"
/**
 * print_sign - entry point
 * Description: prints the sign of a number
 * @c: carrier variable
 * Return: 1 if n>0, 0 if n==0, -1 if n<0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
