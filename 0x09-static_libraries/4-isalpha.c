#include "main.h"

/**
 * _isalpha - checks if a character is an alphabetic character
 * @c: character argument passed to the method
 *
 * Return: 1 if true else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
