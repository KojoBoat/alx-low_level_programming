#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all alphabets except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ltrs[26] = {"abcdefghijklmnopqrstuvwxyz"};
	int i;

	for (i = 0; i < 26; i++)
	{
		if (ltrs[i] == 'e' || ltrs[i] == 'q')
		{
			continue;
		}
		putchar(ltrs[i]);
	}
	putchar('\n');
	return (0);
}
