#include "main.h"

/**
 * print_chessboard - function that prints chessboard
 * @a: a pointer pointing towards 2D array
 */
void print_chessboard(char (*a)[8])
{
	/* r will rep rows and c will rep columns */
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
