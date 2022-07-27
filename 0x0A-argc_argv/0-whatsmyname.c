#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to print the name of the program
 * @argc: number of arguments passed to the commandline
 * @argv: string values of elements
 *
 * Return: Always success (0)
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);

	return (0);
}
