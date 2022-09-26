#include "main.h"

/**
 * print_chessboard - Function to print the chessboard
 * @a: by 8 matrix
 */
void print_chessboard(char (*a)[8])
{
	int outter_count, inner_count;

	for (outter_count = 0; outter_count < 8; outter_count++)
	{
		for (inner_count = 0; inner_count < 8; inner_count++)
		{
			_putchar(*(*(outter_count + a) + inner_count));
		}
	_putchar('\n');
	}
}
