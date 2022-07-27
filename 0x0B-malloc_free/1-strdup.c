#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to return pointer to newly allocated space in memory
 * @str: char parameter
 *
 * Return: pointer to new allocated space
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = (char *)malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		a[j] = str[j];

	return (a);
}
