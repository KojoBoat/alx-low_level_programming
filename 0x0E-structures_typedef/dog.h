#ifndef DOG
#define DOG

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct with params
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
