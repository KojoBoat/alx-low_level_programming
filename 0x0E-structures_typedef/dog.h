#ifndef DOG
#define DOG

/**
 * struct dog - struct of type dog
 * @name: property
 * @owner: property
 * @age: property
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
