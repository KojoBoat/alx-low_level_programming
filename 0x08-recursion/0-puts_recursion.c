#include "main.h"

/**
 * _puts_recursion - function to print characters
 * to screen
 * @s: string to print
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	else
	{
		_putchar(*(s));
		_puts_recursion(s + 1);
	}
}
