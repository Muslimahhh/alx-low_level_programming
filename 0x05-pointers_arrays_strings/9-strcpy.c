#include "main.h"

/**
* _strcpy - Copies a string from one pointer to another
* @dest: The destinated pointer
* @src: The source pointer
*
* Return: The pointer to @dest (char type)
*/
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}

