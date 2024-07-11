#include "variadic_functions.h"

/**
  * print_strings - prints strings
  * @n: number of arguments
  * @separator: pointer to the separator
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list np;
	const char *c;

	va_start(np, n);
	for (x = 0; x < n; x++)
	{
		c = va_arg(np, char*);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (separator != NULL && x != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(np);
}
