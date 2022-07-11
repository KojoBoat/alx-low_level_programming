#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: parameter
 * @n: parameter
 *
 * Return: no return;
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
