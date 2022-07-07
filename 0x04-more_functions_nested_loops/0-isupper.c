#include "main.h"

/**
 * _isupper - function to check if arg is upper
 * @n: parameter passed to the function
 *
 * Return: 1 if true or 0 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
