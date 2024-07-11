#include "main.h"
/**
  * binary_to_uint - converts a binary to unsigned int
  * @b: pointer to the inary strings
  * Return: junsigned inter value
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (0);
		}
		num <<= 1;
		num += b[i] - '0';
	}
	return (num);
}
