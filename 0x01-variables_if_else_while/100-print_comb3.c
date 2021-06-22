#include<stdio.h>
/**
*main - print numbers
*
*Return: end program
*/
int main(void)
{
char ab, ac;
for (ab = 0; ab < 10; ab++)
{
for (ac = i; ac < 10; ac++)
{
if (ab != ac)
{
putchar(ab + '0');
putchar(ac + '0');
if (i < 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
