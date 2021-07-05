#include"holberton.h"
/**
* reverse_array - reverses an array of int
* @a: array
* @n: number of int elements in a
*/
void reverse_array(int *a, int n)
{
int s = 0, e = n - 1, t;
while (s <= e)
{
	t = a[s];
	a[s] = a[e];
	a[e] = t;
	s++;
	e;
}
