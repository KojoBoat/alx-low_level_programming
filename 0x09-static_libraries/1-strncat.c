#include "main.h"

/**
 * _strncat - name of function
 *
 * @dest: destination
 * @src: source
 * @n: max bytes
 *
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count;
	int i;

	count = 0;
	i = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (i < n)
	{
		*(dest + count) = *(src + i);
		if (*(src + i) == '\0')
			break;
		count++;
		i++;
	}

	return (dest);
}
