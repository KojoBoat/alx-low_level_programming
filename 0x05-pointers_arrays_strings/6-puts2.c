#include "main.h"

/**
 * puts2 - function to print every other character
 * @str: parameter
 *
 * Return: no return
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
