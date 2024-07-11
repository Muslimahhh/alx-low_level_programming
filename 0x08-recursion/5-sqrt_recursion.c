#include "main.h"
/**
  * _is_sqrt - checks if a number is a prime
  * @x: inter arg 1 
  * @y: int arg 2
  * Return: number that is a square root
  */
int _is_sqrt(int x, int y)
{
	if ((y * y) == x)
		return (y);
	if (y == (x / 2))
		return (-1);
	return (_is_sqrt(x, y + 1));
}
/**
  *  _sqrt_recursion - gets the square root of a number
  * @n: - argument n
  * Return: returns 0 or 1 if the integer is a prime number
  */
int _sqrt_recursion(int n)
{
	int z = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_is_sqrt(n, z));
}
