#include "main.h"
#include <stdio.h>
/**
  * set_bit - set the bit at  index to value 1
  * @n: inter argumen
  * @index: the ndex
  * Return: the integer at the index
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 32)
	{
		*n |= (1 << index);
		return (1);
	}
	return (-1);
}
