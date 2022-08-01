#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the dog struct
 * @d: pointer to the struct
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d)
	{
		if (d->name == NULL)
		{
			printf("%s: (nil)\n", d->name);
		}
	
		if (d->owner == NULL)
		{
			printf("%s: (nil)\n", d->owner);
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
