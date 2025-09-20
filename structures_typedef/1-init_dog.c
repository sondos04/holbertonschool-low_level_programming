#include <stdlib.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
int i;

if (d == NULL)
return;

if (name)
{
for (i = 0; name[i]; i++)
;
d->name = malloc(i + 1);
if (d->name)
{
for (i = 0; name[i]; i++)
d->name[i] = name[i];
d->name[i] = '\0';
}
}
else
d->name = NULL;

if (owner)
{
for (i = 0; owner[i]; i++)
;
d->owner = malloc(i + 1);
if (d->owner)
{
for (i = 0; owner[i]; i++)
d->owner[i] = owner[i];
d->owner[i] = '\0';
}
}
else
d->owner = NULL;

d->age = age;
}
