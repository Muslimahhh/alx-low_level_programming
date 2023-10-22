#include "main.h"

/**
* _puts - Prints a string to the terminal
* @str: String to be printed
*
* Return: Nothing (void)
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}

