#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print n times of table
 * @n: the n table to be printed
* Return: void
 */
void print_times_table(int n)
{
	int x, y, num;

	for (x = 0; x <= n; x++)
	{
		_putchar('0');
		for (y = 1; y <= n; y++)
		{
			num = x * y;
			if (num <= 99)
				_putchar(' ');
			if (num <= 9)
				_putchar(' ');
			if (num >= 100)
			{
				_putchar((num / 10) + '0');
				_putchar((num / 10) % 10 + '0');
			} else if (num > 9 && num < 100)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
