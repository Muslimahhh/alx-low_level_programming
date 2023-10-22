#include "main.h"

/**
* puts_half - Prints half of a string
* @str: The string
*
* Return: Nothing (void)
*/
void puts_half(char *str)
{
	int length, half;

	for (length = 0; str[length] != '\0'; length++)
		;
	if (length % 2 == 0)
	{
		for (half = length / 2; str[half] != '\0'; half++)
			_putchar(str[half]);
	}
	else
	{
		for (half = (length / 2) + 1; str[half] != '\0'; half++)
			_putchar(str[half]);
	}
	_putchar(10);
}

