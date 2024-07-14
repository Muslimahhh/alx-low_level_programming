#include  "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: The string that is to be serched
 * @c: The character to be located
 *
 * Description: The program searches s for the first occurance of c.
 * Return: a pointer to c if c is found and NULL if not.
*/
char *_strchr(char *s, char c)
{
	char *ptr = NULL;

	while (*s)
	{
		if (*s == c)
			break;

		s++;

	}
	if (*s == c)
		return (s);
	else
		return (ptr);

}
