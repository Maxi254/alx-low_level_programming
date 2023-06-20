#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - adds a variable to struct.dog
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: owner
 * Return: success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
