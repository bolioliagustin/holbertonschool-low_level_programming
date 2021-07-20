#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Entry point
 * @d: sasd
 * @name: name dog
 * @age: age dog
 * @owner: owner
 *
 * Description: message blabalskaka
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog *d;

d->name = name;
d->age = age;
d->owner = owner;
}
