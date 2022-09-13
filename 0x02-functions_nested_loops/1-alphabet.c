#include "main.h"
/**
 * main - main block
 * Description: a function that prints the alphabet in lower case followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
