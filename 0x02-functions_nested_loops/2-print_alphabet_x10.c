#include "holberton.h"
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
