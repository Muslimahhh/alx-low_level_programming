#include "main.h"

/**
* print_line - Prints the _ character for an amount of times specified
* @n: The amount of times the character should be printed
*
* Return: Nothing
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar(10);
}

