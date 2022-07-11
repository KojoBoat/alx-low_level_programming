#include "main.h"

/**
 * _puts - function to print string to stdout
 * @str: parameter
 *
 * Return: no return (void)
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
