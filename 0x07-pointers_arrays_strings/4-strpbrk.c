#include "main.h"

/**
 * _strpbrk - function to locate the first occurrence
 * in the second string passed as args
 * @s: string to be searched
 * @accept: string to check against
 *
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		j = 0;

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
	}

	return ('\0');
}
