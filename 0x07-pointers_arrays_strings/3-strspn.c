#include "main.h"

/**
* _strspn - Gets the length of a prefix substring
* @s: The main string from which we will get the substring length
* @accept: The substring we want to get its length
*
* Return: An integer with the length of the substring
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int flag = 0;

	while (*s)
	{
		char *accept_cpy = accept;

		while (*accept_cpy)
		{
			if (*s == *accept_cpy)
			{
				length++;
				flag = 1;
				break;
			}
			else
			{
				flag = 0;
				accept_cpy++;
			}
		}
		if (flag == 0)
			break;
		s++;
	}
	return (length);
}

