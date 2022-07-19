#include "main.h"

/**
 * _strspn - function to get the length of a prefix
 * substring
 * @s: initial string
 * @accept: second string
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int bool;

	i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		bool = 1;
		j = 0;

		for (; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
