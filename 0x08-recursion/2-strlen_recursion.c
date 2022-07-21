#include "main.h"

/**
 * _strlen_recursion - function to print the length of
 * a string
 * @s: string param
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
