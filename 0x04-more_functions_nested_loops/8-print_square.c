#include "main.h"

/**
* print_square - Prints a square on the terminal
* @size: Integer showing how large the square to be
*
* Return: Nothing
*/
void print_square(int size)
{
	int n;

	for (n = 0; n < size; n++)
	{
		int i = 0;

		while (i < size)
		{
			_putchar(35);
			i++;
		}
		_putchar(10);
	}
	if (size < 1)
		_putchar(10);
}

