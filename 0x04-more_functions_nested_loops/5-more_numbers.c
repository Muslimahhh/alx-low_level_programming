#include "main.h"

/**
* more_numbers - Prints the numbers 0 - 14, ten times
*
* Return: Nothing
*/
void more_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int p = 0, d;

		while (p < 15)
		{
			d = p;
			if (p / 10)
			{
				_putchar(48 + 1);
				d = p % 10;
			}
			_putchar(48 + d);
			p++;
		}
		_putchar(10);
	}
}

