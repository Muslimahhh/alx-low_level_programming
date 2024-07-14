#include <stddef.h>
#include  "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string parameter to be searched
 * @accept: string character inputs that is checked against s
 *
 * Description: locates the 1st occurrence in s of any of the bytes inaccept
 * Return: Pointer to the first occurance of an element of array in s
*/
char *_strpbrk(char *s, char *accept)
{
	int is_present;
	char *current_pointer;
	char *not_found = NULL;

	while (*s)
	{
		current_pointer = accept;

		while (*current_pointer)
		{
			if (*s == *current_pointer)
			{
				is_present = 1;
				break;
			}
			else
				is_present = 0;

			current_pointer++;
		}
		if (is_present == 1)
			break;

		s++;
	}
	if (is_present == 1)
		return (s);
	else
		return (not_found);
}
