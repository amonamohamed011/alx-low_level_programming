#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main prints the alphABET
* Return: Always 0 (Success)
*/

int main(void)
{
int i = 'a';
int j = 'A';
while (i <= 'z')
{
putchar(i);
i++;
}
while (j <= 'Z')
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
