#include <stdio.h>

/**
 * main - entry point of the application
 * @argc: int args
 * @argv: array value of strings
 *
 * Return: Always success (0)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;

	if (argc >= 0)
	{
		for (; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
