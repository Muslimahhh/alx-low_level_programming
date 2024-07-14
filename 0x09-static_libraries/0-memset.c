#include  "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: Memory reserved of type char to be filled
 * @b: Constant to fill s
 * @n: Number of bytes of the memory area pointed by s
 *
 * Return: Pointer to char of relaced values.
*/
char *_memset(char *s, char b, unsigned int n)
{
	/*innitialising pointer which tracks the adress of s[0] as s++ */
	char *back_to_beginning = s;


	while (n-- > 0)
	{
		*s = b;
		s++;
	}
	return (back_to_beginning);
}
