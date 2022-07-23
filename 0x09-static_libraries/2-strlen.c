#include "main.h"

/**
 * _strlen - function to print the length of a string
 * @s: parameter
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;
	int i;

	i = 0;
	count = 0;

	while (*(s + i) != '\0')
	{
		count += 1;
		i++;
	}
	return (count);
}
