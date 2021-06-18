#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main block
* Description: Get a random number and print the number
* and if it is positive, negative, or zero
* Return: 0
*/

int main(void)
{
int n;
int f;
srand(time(0));
n = rand() - RAND_MAX / 2;
f = n % 10;
if (f == 0)
{
printf("Last digit of %i is %i and is 0\n", n, f);
}
else if (f > 6)
{
printf("Last digit of %i is %i and is greater than 5\n", n, f);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, f);
}
return (0);
}
