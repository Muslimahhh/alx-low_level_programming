#include "main.h"

/**
* _strcat - Concatenates two strings
* @dest: The string that will be appended to
* @src: The substring that will be joined to a main string
*
* Return: A pointer to the concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int dest_length, src_length;

	for (dest_length = 0; dest[dest_length] != '\0'; dest_length++)
		;
	for (src_length = 0; src[src_length] != '\0'; src_length++)
	{
		dest[dest_length++] = src[src_length];
	}
	dest[dest_length] = '\0';
	return (dest);
}

