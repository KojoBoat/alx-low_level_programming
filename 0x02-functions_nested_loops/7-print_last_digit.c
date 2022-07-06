#include "main.h"

/**
 * print_last_digit - function to print last number of a digit
 * @n: function parameter
 *
 * Return: Return last digit of a number
 */
int print_last_digit(int n)
{
	int lst;

	lst = n % 10;
	if (lst < 0)
	{
		_putchar(-lst + 48);
		return (-lst);
	}
	else
	{
		_putchar(lst + 48);
		return (lst);
	}
}
