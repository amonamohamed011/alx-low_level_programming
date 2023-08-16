#include <stdio.h>
/**
* main - Entry point
*
* Prints the first 98 Fibonacci numbers,
* starting with 1 and 2.
* Return: Always 0 successful
*/
int main(void)
{
unsigned long int t0 = 0, t1 = 1, s;
int i;
for (i = 1; i <= 98; i++)
{
s = t0 + t1;
if (i != 98)
{
printf("%d, ", s);
}
else
{
printf("%d\n", s);
}
t0 = t1;
t1 = s;
}
return (0);
}
