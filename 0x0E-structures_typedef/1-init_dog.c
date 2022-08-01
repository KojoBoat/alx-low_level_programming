#include "dog.h"

/**
 * init_dog - function to initialize struct
 * @d: struct dog
 * @name: name parameter
 * @age: age param
 * @owner: owner
 *
 * Return: no return
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
