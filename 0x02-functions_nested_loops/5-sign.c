#include "main.h"

/**
 * print_sign - prints the appropriate sign of given input
 * @n: argument passed to the function
 *
 * Return: 1 if postive, 0 if n is 0 or -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
