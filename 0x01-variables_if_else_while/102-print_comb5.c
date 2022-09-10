#include <stdio.h>
#include <unistd.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int c, i, a, b;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (a = 48; a <= 57; a++)
			{
				for (b = 48; b <= 57; b++)
				{
				if (((a + b) > (c + i) && a >= c) || c < a)
				{
					putchar(c);
					putchar(i);
					putchar(' ');
					putchar(a);
					putchar(b);

					if (c + i + a + b == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
