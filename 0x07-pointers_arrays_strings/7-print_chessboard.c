#include "main.h"

/**
* print_chessboard - Prints a 8*8 2D array onto the terminal
* @a: The array to be printed (a.k.a the chessboard)
*
* Return: Nothing (void)
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}

