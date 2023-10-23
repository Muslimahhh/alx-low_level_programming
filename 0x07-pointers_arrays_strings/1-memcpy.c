#include "main.h"

/**
* _memcpy - Copies "n" bytes from a memory area to another
* @dest: The destination memory area
* @src: The source memory are
* @n: The amount of bytes to copy
*
* Return: A pointer to the destination memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_cpy = dest;
	unsigned int increment;

	for (increment = 1; increment <= n; increment++)
	{
		*dest_cpy = *src;
		dest_cpy++;
		src++;
	}
	return (dest);
}

