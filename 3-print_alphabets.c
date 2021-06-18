#include <stdio.h>
/**
* main - Print the alphabet in lower case and then in upper case
*
* Return: Always 0 (Success)
*/
int main(void)
{
char x, X;
for (x = 'a'; x < 'z'; x++)
{
putchar(x);
}
for (X = 'A'; X < 'Z'; X++)
{
putchar(X);
}
putchar('\n');
return (0);
}
