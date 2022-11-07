#include <stdio.h>

/**
 * main - Prints the number of argumens passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main( int argc, char __attributes__((__unused__)) * argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
