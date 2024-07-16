#include "function_pointers.h"

/**
* print_name - Prints a name that was modified by a function
* @name: The original name
* @f: The function to modify the name
*
* Return: Nothing (void)
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

