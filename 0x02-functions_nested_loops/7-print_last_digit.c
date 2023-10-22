#include "main.h"

/**
* print_last_digit - Prints the last digit of a given integer
* @n: The integer parameter from where the last digit is taken
*
* Return: The last digit of the integer given
*/
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;
	_putchar(48 + last_digit);
	return (last_digit);
}

