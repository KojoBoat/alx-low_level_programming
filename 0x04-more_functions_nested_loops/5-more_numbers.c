#include "main.h"

/**
 * more_numbers - print numbers 10 times
 * Return: no return
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
