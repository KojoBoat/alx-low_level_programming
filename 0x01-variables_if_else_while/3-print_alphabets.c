#include <stdio.h>

/**
 * main - entry point
 *
 * description: Print alphabets in lowercase
 * and in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ltrs[26] = "abcdefghijklmnopqrstuvwxyz";
	char ltr_cap[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;

	for (i = 0; i < 26; i++)
	{
		putchar(ltrs[i]);
	}

	for (j = 0; j < 26; j++)
	{
		putchar(ltr_cap[j]);
	}
	putchar('\n');
	return (0);
}
