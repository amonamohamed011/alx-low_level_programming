#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints numbers
* Return: Always 0 (Success)
*/

int main(void)
{
int a;
char low;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
for (low = 'a'; low <= 'f'; low++)
{
putchar(low);
}
putchar('\n');
return (0);
}
