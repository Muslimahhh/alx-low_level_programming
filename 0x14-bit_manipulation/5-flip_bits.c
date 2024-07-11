#include "main.h"
#include <stdio.h>
/**
  * flip_bits - clear the bit at  index to value 1
  * @n: inter argumen
  * @m: the ndex
  * Return: number of bit plis to get number m
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n > 0 || m >  0)
	{
		if ((n & 1) != (m & 1))
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
