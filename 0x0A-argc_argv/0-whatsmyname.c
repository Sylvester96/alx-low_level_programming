#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: Number of command line arguments
 * @argv: list of command line arguments
 *
 * Return: (0)
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);

	(void)argc;

	return (0);
}
