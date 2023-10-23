#include "main.h"

/**
* _strstr - Locates the first occurrence of a substring
* @haystack: The main string to be searched
* @needle: The substring we are looking for
*
* Return: A pointer to the occurence of the substring in the main string
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *needle_cpy = needle;
		char *haystack_cpy = haystack;

		while (*needle_cpy && *needle_cpy == *haystack)
		{
			haystack++;
			needle_cpy++;
		}
		if (*needle_cpy == '\0')
			return (haystack_cpy);
		haystack++;
	}

	return ('\0');
}

