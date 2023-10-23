#include "main.h"

/**
* _memset - Fills an amount of memory space of a pointer with a constant char
* @s: The pointer whose memory space will be used
* @b: The constant character that will be used as a filler
* @n: The amount of space to be filled
*
* Return: A pointer to the modified initial pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *s_cpy = s;
	unsigned int increment;

	for (increment = 1; increment <= n; increment++)
	{
		*s_cpy = b;
		s_cpy++;
	}
	return (s);
}

