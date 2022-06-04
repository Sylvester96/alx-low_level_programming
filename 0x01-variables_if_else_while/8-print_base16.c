#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase using only putchar
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	for (digit = 'a'' digit <= 'f'; digtit++)
		putchar(digit);
	putchar('\n');

	return (0);
}
