#include "main.h"

/**
 * _isdigit - check if input is digit
 * @n: Argument
 *
 * Return: 1 if true or 0 if false
 */

int _isdigit(int n)
{
	if (n >= 48 && n < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
