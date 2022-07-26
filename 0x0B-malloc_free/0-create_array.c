#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create an array of chars
 * and initalizes with a specific char
 * @size: int parameter
 * @c: char parameter
 *
 * Return: return pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int a;

	a = 0;

	if (size == 0)
		return (NULL);

	b = malloc(sizeof(*b) * size);

	if (b == NULL)
		return (NULL);

	while (a != size)
	{
		b[a] = c;
		a++;
	}

	return (b);
}
