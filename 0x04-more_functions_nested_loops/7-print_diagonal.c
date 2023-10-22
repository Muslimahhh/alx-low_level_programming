#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the terminal
* @n: An integer that specifies how long the line should be
*
* Return: Nothing
*/
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int p = 0;

		while (p < i)
		{
			_putchar(32);
			p++;
		}
		_putchar(92);
		_putchar(10);
	}
	if (n < 1)
		_putchar(10);
}

