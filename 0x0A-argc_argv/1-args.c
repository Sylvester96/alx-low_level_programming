#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of command line arguments
 * @argv: list of commandline arguments
 *
 * Return: (0)
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);

	(void)argv;
	return (0);
}
