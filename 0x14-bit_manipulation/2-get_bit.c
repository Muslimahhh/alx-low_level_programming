#include "main.h"
#include <stdio.h>
/**
  * get_bit - get the value of a bit at a given index
  * @n: inter argumen
  * @index: the ndex
  * Return: the integer at the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, len = 0;
	unsigned long int temp = n;

	for (i = 0; temp != 0; ++i)
	{
		len++;
		temp >>= 1;
	}
	if (index > len)
		return (-1);
	return ((n >> index) & 1);
}
