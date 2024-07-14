#include  "main.h"

/**
 * more_numbers - function that prints, from 0 to 14, ten times.
 *
 * Description: The program prints from 0 to 14 ten times each followed by a
 * new line
 * Return: Always nothing (sucess)
*/
void more_numbers(void)
{
	int i = 1;

	while (i <= 10)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
