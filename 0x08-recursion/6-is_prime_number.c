#include "main.h"
/**
  * _is_divide - checks if a number is a prime
  * @x: inter arg 1
  * @y: int arg 2
  * Return: prime number of int 
  */
int _is_divide(int x, int y)
{
	if ((x % y) == 0)
		return (0);
	if (y == (x / 2))
		return (1);
	return (_is_divide(x, y + 1));
}
/**
  * is_prime_number - checks for prime number of an int
  * @n: Integer argument
  * Return: inter prime number
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n > 1 && n < 4)
		return (1);
	return (_is_divide(n, 2));
}
