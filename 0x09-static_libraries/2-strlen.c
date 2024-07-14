#include  "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: String input parameter
 *
 * Return: length
*/
int _strlen(char *s)
{
	int i = 0;
	int c = 0;

	while (s[c] != '\0')
	{
		i++;
		c++;
	}

	return (i);
}
