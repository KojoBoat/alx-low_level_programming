#include "main.h"
/**
 * _strncpy - function to copy strings given some
 *
 * @dest: destination
 * @src: source
 * @n: bytes given
 *
 * Return: pointer to the final result (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
