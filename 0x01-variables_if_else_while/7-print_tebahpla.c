#include <stdio.h>

/**
 * main - entry point
 *
 * Description - print all alphabets in reverse
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i;

	for(i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
