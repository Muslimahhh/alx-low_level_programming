#include <stdio.h>
#include <unistd.h>
/**
  * _first - prints a sttring befor main.c executes
  * Return: void
  */
void _first(void)__attribute__((constructor));
void _first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
