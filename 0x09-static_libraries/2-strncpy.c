#include  "main.h"

/**
 * _strncpy -  function that copies a string.
 * @dest: Innitially empty string to be appended
 * @src: String to be copied
 * @n: Int parameter for representing maximum number of bites to be copied
 *
 * Return: Copied string (sucess)
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *copied = dest;
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}

	return (copied);
}
