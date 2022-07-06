#include "main.h"

/**
 * print_alphabet - write all the alphabets to the screen
 *
 * Return: void
 */

void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
