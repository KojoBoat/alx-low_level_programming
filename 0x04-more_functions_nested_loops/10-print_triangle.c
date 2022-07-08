#include "main.h"

/**
 * print_triangle - prints triangle
 * @n: number of lines
 *
 * Return: no return
 */
void print_triangle(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < (n - 1); j++)
			_putchar(' ');
		for (j--; j < n; j++)
			_putchar(35);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
