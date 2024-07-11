#include "main.h"
#include <stdio.h>
/**
  * get_endianness - get the endianness of the machine
  * Return: integer depending on the endianess
  */
int get_endianness(void)
{
	unsigned int x = 0x1;
	char *c = (char *) &x;

	return (*c);
}
