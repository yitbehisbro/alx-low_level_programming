#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - holds dog profile
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: No need
 */
typedef struct dog
{
	char	*name;
	float	age;
	char	*owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
