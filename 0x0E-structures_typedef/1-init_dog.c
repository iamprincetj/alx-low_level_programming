#include "dog.h"
#include <stdarg.h>

/**
 *init_dog - initialize a variable of type struct dog
 *@d: pointer to the variable struct dog
 *@name: name variable in the struct dog variable
 *@age: age variable in the struct dog variable
 *@owner: owner variable in the struct dog variable
 *
 *Return nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
