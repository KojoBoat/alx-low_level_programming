#include "main.h"

/**
 * print_rev - function to reverse string
 * @s: parameter
 *
 * Return: no return;
 */
void print_rev(char *s)
{
	int i;

	i = '\0'- 1;
	for (i; i > 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
