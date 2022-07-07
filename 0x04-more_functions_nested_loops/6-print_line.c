#include "main.h"

/**
 * print_line - print '_' character number
 * of times
 * @n: number of times to print character
 * 
 * Return: no return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar(95);
	}
	_putchar('\n');
}
