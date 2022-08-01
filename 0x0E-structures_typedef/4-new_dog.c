#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: to new ptr value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int len_name, len_owner, a;

	ptr_dog = malloc(sizeof(*ptr_dog));
	if (ptr_dog == NULL || !(name) || !(owner))
	{
		free(ptr_dog);
		return (NULL);
	}

	for (len_name = 0; name[len_name]; len_name++)
		;

	for (len_owner = 0; owner[len_owner]; len_owner++)
		;

	ptr_dog->name = malloc(len_name + 1);
	ptr_dog->owner = malloc(len_owner + 1);

	if (!(ptr_dog->name) || !(ptr_dog->owner))
	{
		free(ptr_dog->owner);
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}

	for (a = 0; a < len_name; a++)
		ptr_dog->name[a] = name[a];
	ptr_dog->name[a] = '\0';

	ptr_dog->age = age;

	for (a = 0; a < len_owner; a++)
		ptr_dog->owner[a] = owner[a];
	ptr_dog->owner[a] = '\0';

	return (ptr_dog);
}
