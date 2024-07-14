#include  "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: string input parametter to be appended
 * @src: string input parametter that will be sucessfully added to @dest
 * @n: Max number of bytes to be used from src
 *
 * Description: The program concatenates two strings using at most
 * at most n bytes from src function that concatenates two strings.
 * Return: concartinated string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *concatinate = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		if (n <= 0)
			break;

		else
		{
			*dest = *src;
			src++;
			dest++;
			n--;
		}

		*dest = '\0';
	}
	return (concatinate);
}
