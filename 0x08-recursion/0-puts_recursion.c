#include "main.h"
/**
  *_puts_recursion - print these string using recursion
  * @s: - pointer to the stri ng
  * Return: void
  */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*(s++));
		_puts_recursion(s);
	}

}

