#include "main.h"

/**
 * _abs - function to return absolute of a number
 * @n: parameter to the function
 *
 * Return: absolute of number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
