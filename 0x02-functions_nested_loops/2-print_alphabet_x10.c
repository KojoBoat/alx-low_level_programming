#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 1; i <= 10; i++)
	{
		int j = 0;

		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
}
