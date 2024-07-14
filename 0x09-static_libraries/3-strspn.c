#include  "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string that is to be checked
 * @accept: string parameter with the innitial chars
 *
 * Description: gets the length of the 1st consecutive elements of accept in s
 * Return: Always 0 (sucess)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int number_of_bytes;
	int is_present;
	char *current_accept;

	number_of_bytes = 0;
	is_present = 0;

	while (*s)
	{
		current_accept = accept;

		while (*current_accept)
		{
			if (*current_accept == *s)
			{
				is_present = 1;
				break;
			}
			else
				is_present = 0;

			current_accept++;

		}
		if (is_present == 1)
			number_of_bytes += 1;

		else
			break;
		s++;
	}
	return (number_of_bytes);
}
