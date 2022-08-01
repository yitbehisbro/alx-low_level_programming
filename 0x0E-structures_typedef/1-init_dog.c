#include "dog.h"

/**
 * init_dog - initalize dog struct
 * @d: struct pointer to dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owners
 *
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
