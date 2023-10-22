#include "main.h"

/**
* print_triangle - This function prints a triangle on the terminal
* @size: An integer that specifies the size of the triangle
*
* Return: Nothing
*/
void print_triangle(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int n = size - 1 - i, p = 0;

		while (p < size)
		{
			if (p < n)
				_putchar(32);
			else
				_putchar(35);
			p++;
		}
		_putchar(10);
	}
	if (size < 1)
		_putchar(10);
}

