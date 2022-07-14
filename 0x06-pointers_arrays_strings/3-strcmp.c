#include "main.h"

/**
 * _strcmp - function to compare two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: Return an integer
 */
int _strcmp(char *s1, char *s2)
{
	int count;
	int i;

	i = 0;
	count = 0;

	while (count == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		count = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (count);
}
