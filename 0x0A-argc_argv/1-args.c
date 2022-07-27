#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of args passed to the commandline
 * @argc: int arg
 * @argv: array value of elements
 *
 * Return: Always success (0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
