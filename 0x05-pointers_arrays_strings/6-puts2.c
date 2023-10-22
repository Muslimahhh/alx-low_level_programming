#include "main.h"

/**
* puts2 - Prints the odd characters in a string on the terminal
* @str: String to be used
*
* Return: Nothing (void)
*/
void puts2(char *str)
{
	int num_check;

	for (num_check = 1; *str != '\0'; str++)
	{
		if (num_check % 2)
			_putchar(*str);
		num_check++;
	}
	_putchar(10);
}

