#include "main.h"
#include <stdio.h>
/**
  * print_binary - prints binary representation of a num
  * @n: inter argument
  * Return: binary representation of the number
  */
void print_binary(unsigned long int n)
{
	int temp = n;

	if (temp >> 1 <= 0)
	{
		if (temp & 1)
			_putchar('1');
		else
			_putchar('0');
	}
	if (temp >> 1 > 0)
	{
		print_binary(temp >> 1);
		if (temp & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
