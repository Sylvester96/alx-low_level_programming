#include "main.h"

/**
 * _rev - prints a string in reverse
 * @s: string to be reverse printed
 * Return: (0)
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (i -= 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
