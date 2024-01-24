#include <stdlib.h>
#include "dog.h"
/**
 * init_dog -initalizes a avriable of type struct dog
 * @name:name to initalize
 * @d:pointer to struct dog to initalize
 * @age:age to initalize
 * @owner:owner to initalize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
