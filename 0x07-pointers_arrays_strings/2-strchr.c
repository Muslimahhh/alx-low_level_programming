#include "main.h"

/**
* _strchr - Checks for the first occurence of a char in a string
* @s: The string to be searched
* @c: The char we are looking for
*
* Return: A pointer to the first occurence of the char
*/
char *_strchr(char *s, char c)
{
	char *s_cpy = s;

	while (*s_cpy)
	{
		if (*s_cpy == c)
			return (s_cpy);
		s_cpy++;
	}
	if (*s_cpy == c)
		return (s_cpy);
	return ('\0');
}

