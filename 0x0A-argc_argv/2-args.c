#include <stdio.h>

/**
 * main - prints all arguments it receives one per line
 * @argc: number of commandline arguments
 * @argv: list of command line arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
