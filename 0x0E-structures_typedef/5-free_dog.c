#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees storage
 * @d: struct dog
 */

void free_dog(my_dog *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
