#include "main.h"

/**
* _strncat - Concatenates two strings up till the nth substring of src
* @dest: The destination string
* @src: The string that will be appended
* @n: The length of the substring to be appended
*
* Return: A pointer that points to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *dest_cpy = dest;
	int n_check;

	while (*dest_cpy != '\0')
		dest_cpy++;
	for (n_check = 0; (n_check < n) && *src != '\0'; n_check++)
	{
		*dest_cpy = *src;
		dest_cpy++;
		src++;
	}
	*dest_cpy = '\0';
	return (dest);
}

