#include "variadic_functions.h"

/**
  * sum_them_all - sums all parameter
  * @n: number of arguments
  * Return: sum of all arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x = 0;
	va_list np;

	if (n == 0)
		return (0);
	va_start(np, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(np, unsigned int);
	}
	return (sum);
}
