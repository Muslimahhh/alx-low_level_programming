#include "main.h"

/**
* print_alphabet_x10 - Prints lowercased alphabets 10 times
*
* Return: Void (Main goal of function is to print to terminal)
*/

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		int i;

		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar(10);
		n++;
	}
}

