#include "variadic_functions.h"

/**
  * print_numbers - prints all number
  * @n: number of arguments
  * @separator: pointer to the separator
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list np;

	va_start(np, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(np, unsigned int));
		if (separator != NULL && x != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(np);
}
