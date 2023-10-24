#include "main.h"

/**
 * print_number - prints out a number
 *@n: number to be printed
 */

void print_number(int n)
{
int  y;

if (n > 9 && n < 19)
{
while (n > 9)
{
n = n % 10;
}
_putchar(1 + '0');
_putchar(n + '0');
}
else if (n < 0)
{
y = n * -1;
_putchar('-');
if (y > 9)
{
while (y > 9)
{
n = y % 10;
}
_putchar(9 + '0');
_putchar(n + '0');
}
else
{
_putchar(y + '0');
}
}
else
{
_putchar(n + '0');
}
}
