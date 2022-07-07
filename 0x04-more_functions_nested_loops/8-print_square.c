#include "main.h"

/**
 * print square - print square
 * @n: size
 *
 * Return: no return
 */
void print_square(int n)
{
	int i,j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(35);
		}
		if (i != n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
