#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = malloc(strlen(name) + 1);
if (d->name != NULL)
strcpy(d->name, name);

d->owner = malloc(strlen(owner) + 1);
if (d->owner != NULL)
strcpy(d->owner, owner);

d->age = age;
}
