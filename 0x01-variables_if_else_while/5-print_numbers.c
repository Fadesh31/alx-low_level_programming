#include <stdio.h>
#include <unistd.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int a;
	
	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
