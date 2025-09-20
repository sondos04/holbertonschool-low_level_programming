#ifndef DOG_H
#define DOG_H
/**
 * struct dog -struct for name, age, owner name
 * @name: name of a dog
 * @age: age of the dog
 * @owner: name of the owner of dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
