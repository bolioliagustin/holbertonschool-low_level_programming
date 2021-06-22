#include<stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase,
* followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int ab, num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (ab = 'a'; ab < 'g'; ab++)
{
putchar(ab);
putchar('\n');
}
return (0);
}
