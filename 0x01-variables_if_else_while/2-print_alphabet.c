#include <stdio.h>

/**
 * main - entry point
 *
 * description: Print alphabets in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ltrs[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ltrs[i]);
	}
	putchar('\n');
	return (0);
}
