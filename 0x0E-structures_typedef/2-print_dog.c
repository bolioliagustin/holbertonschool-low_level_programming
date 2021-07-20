#include <stdio.h>
#include "dog.h"
/**
* print_dog - Print dog
* Description: Prints a dog information
* @d: Dog structure
* Return:
*/
void print_dog(struct dog *d)
{
if (d)
{
	if (!d->name)
	{
		printf("Name: (Nil) \n");
	}
	else
	{
		printf("Name: %s \n", d->name);
	}
printf("Age: %f \n", d->age);
	if (!d->owner)
	{
		printf("Owner: (Nil) \n");
	}
	else
	{
		printf("Owner: %s \n", d->owner);
	}
}
}
