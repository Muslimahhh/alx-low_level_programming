#include  "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: String input parameter
 * @needle: Second input parameter
 *
 * Return: Always 0 (sucess)
*/
char *_strstr(char *haystack, char *needle)
{
	char *start_haystack, *current_needle;

	while (*haystack)
	{
		start_haystack = haystack;
		current_needle = needle;

		while (*current_needle && *haystack && *haystack == *current_needle)
		{
			current_needle++;
			haystack++;
		}

		if (*current_needle == '\0')
		{
			return (start_haystack);
		}

		haystack = start_haystack + 1;

	}

	return (NULL);
}#include  "main.h"

/**
 * more_numbers - function that prints, from 0 to 14, ten times.
 *
 * Description: The program prints from 0 to 14 ten times each followed by a
 * new line
 * Return: Always nothing (sucess)
*/
void more_numbers(void)
{
	int i = 1;

	while (i <= 10)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
