#include "main.h"

/**
* _strncpy - Copies a string, with a max byte of n
* @dest: Destination string to be copied to
* @src: Source string that will be copied
* @n: The max number of byte to be copied from src to dest
*
* Return: A poiner to the dest string
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_cpy = dest;
	int n_check;

	for (n_check = 0; (n_check < n) && (*src != '\0'); n_check++)
	{
		*dest_cpy = *src;
		dest_cpy++;
		src++;
	}
	while (n_check < n)
	{
		dest[n_check] = '\0';
		n_check++;
	}

	return (dest);
}

