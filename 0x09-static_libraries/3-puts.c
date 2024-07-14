#include  "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: String parameter to be printed
 *
 * Return: Always nothing (sucess)
*/
void _puts(char *str)
{
	int position = 0;

	while (str[position] != '\0')
	{
		_putchar(str[position]);
		position++;
	}
	_putchar('\n');
}
