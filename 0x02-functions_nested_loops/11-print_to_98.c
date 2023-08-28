#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: The number to start printing from
* Return: Always 0 (Success)
*/
void print_to_98(int n)
{
int a;
if (n > 98)
for (a = n; a > 98; a--)
printf("%d, ", a);
else
for (a = n; a < 98; a++)
printf("%d, ", a);
printf("98\n");
}
