#include  "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: Space where copied string will go
 * @src: String to be copied
 * @n: Number of bytes to be copied
 *
 * Return: A pointer to the newly modified part in memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*innitialising same as dest that will be incremented*/
	char *ptr = dest;

	while (n-- > 0)
	{
		*ptr = *src;

		ptr++;
		src++;
	}

	return (dest);
}
