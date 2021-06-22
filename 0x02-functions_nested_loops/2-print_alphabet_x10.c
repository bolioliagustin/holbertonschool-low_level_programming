#include "holberton.h"
/**
* print_alphabet_x10 - print 10 times the alphabet inside the loop
* Description:
* Return - void
**/
void print_alphabet_x10(void)
{
int az = 0;
char AZ;
while (az++ <= 9)
{
for (AZ = 'a'; AZ <= 'z'; AZ++)
_putchar(AZ);
_putchar('\n');
}
}
