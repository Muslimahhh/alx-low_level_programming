#include "variadic_functions.h"

/**
  * print_char - print charac
  * @arg: argument
  * Return: void
  */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}
/**
   * print_int - print integer
   * @arg: argument
   * Return: void
   */
void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}
/**
   * print_float - print float
   * @arg: argument
   * Return: void
   */
void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}
/**
  * print_string - print string
  * @arg: argument
  * Return: void
  */
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
 /**
   * print_all - prints every thing
   * @format: list of all type of format
   * @...: varying number of arguments
   * Return: void
   *
   */
void print_all(const char *format, ...)
{
	print_func all_funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_list np;
	int x = 0;
	char *separator = "";

	va_start(np, format);

	while (format && (*format))
	{
		x = 0;
		while (x < 4 && (*format != *(all_funcs[x].fmt)))
			x++;
		if (x < 4)
		{
			printf("%s", separator);
			all_funcs[x].print(np);
			separator = ", ";
		}
		format++;
	}

	printf("\n");
	va_end(np);
}
