#include "main.h"
/**
 * main - prints _putchar
 * Return: 0
 */
int main(void)
{
	char text [9] = "_putchar";

	int i = 0;

	for(i = '0'; i < '8'; i++)
	{
		putchar(text);
	}
	putchar('\n');
	return (0);
}
