#include "main.h"

/**
* _strlen - Calculates the length of a given string
* @s: The string to be checked
*
* Return: Integer value of the length
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

