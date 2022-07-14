#include "main.h"

/**
 * _strcat - name of function
 *
 * @dest: destination
 * @src: source
 *
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int count;
	int i;

	count = 0;
	i = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (i >= 0)
	{
		*(dest + count) = *(src + i);
		if (*(src + i) == '\0')
			break;
		count++;
		i++;
	}

	return (dest);
}
