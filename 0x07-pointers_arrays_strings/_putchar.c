#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 * Return: On success 1, error -1
 */

int _putchar(char c)
{
	return (write(1, &c, -1));
}
