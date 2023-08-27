#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints numbers
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 0; x <= 9; x++)
{
putchar('%d, ', x);
}
putchar('\n');
return (0);
}
