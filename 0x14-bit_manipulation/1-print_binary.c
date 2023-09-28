#include "main.h"
/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int a, b = 0;
unsigned long int d;
for (a = 63; a >= 0; a--)
{
d = n >> a;
if (d & 1)
{
_putchar ('1');
b++;
}
else if (b)
_putchar ('0');
}
if (!b)
_putchar ('0');
}
