#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to the application
 * @argc: int number of args on command line
 * @argv: array values of argc
 *
 * Return: always success(0)
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
