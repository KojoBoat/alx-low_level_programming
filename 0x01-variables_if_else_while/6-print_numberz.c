#include <stdio.h>

/**
 * main - entry point
 *
 * Description - print all single base 10
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i;

	for(i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
