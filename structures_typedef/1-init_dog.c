#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the dog struct to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
