#include "main.h"

/**
* print_alphabet - Prints lower letter alphabets to the console
*
* Return: Nothing
* (The main objective of the function is to print to the terminal)
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}

