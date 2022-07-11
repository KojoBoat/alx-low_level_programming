#include "main.h"

/**
 * swap_int - function to swap to integers
 * @a: parameter first
 * @b: parameter second
 *
 * Return: no return (void)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
