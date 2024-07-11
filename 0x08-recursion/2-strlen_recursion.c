#include "main.h"
/**
  * _strlen_recursion - print a string using recursion
  * @s: - pointer to the stri ng
  * Return: void
  */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
