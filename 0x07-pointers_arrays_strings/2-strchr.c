#include "main.h"

/**
 * _strchr - function to locate character in a
 * string
 * @s: given string
 * @c: character to locate
 *
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
