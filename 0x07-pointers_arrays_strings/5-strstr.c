#include "main.h"

/**
 * _strstr - function finds the first occurrence
 * of the substring
 * @haystack: main string to search the substring
 * @needle: string to form substring
 *
 * Return: a pointer to the beginning of the located
 * substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;

		while (*haystack != '\0' && *j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
		{
			return (i);
		}
		haystack = i + 1;
	}
	return (0);
}
