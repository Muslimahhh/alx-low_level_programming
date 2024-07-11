#include "main.h"
/**
  * _pow_recursion - print a string using recursion
  * @x: - integer argument to be raised
  * @y: second argument, power
  * Return: value of the x raised to y
  */ 
int _pow_recursion(int x, int y)
{
	int num = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (num * _pow_recursion(x, y - 1));
}
