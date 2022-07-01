#include <stdio.h>

/**
 * main - entry point
 *
 * Description - print numbers separated by comma
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
