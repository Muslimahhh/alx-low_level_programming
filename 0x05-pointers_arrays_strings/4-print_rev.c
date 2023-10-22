#include "main.h"

/**
* print_rev - Prints a string in reverse
* @s: String to be printed
*
* Return: Nothing (void)
*/
void print_rev(char *s)
{
	int string_length, rev_int;

	for (string_length = 0; *s != '\0'; s++)
		string_length++;
	for (rev_int = string_length; rev_int > 0; rev_int--)
	{
		s--;
		_putchar(*s);
	}
	_putchar(10);
}

