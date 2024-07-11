#include "main.h"
/**
  * factorial - calculates the factorial of a given number
  * @n: - first integer argument
  * Return: the factorial pof a  number
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n >= 0 && n < 2)
		return (1);
	return (n * factorial(n - 1));

}
