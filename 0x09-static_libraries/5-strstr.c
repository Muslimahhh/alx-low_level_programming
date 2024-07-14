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
}
