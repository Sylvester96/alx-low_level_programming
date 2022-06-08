#include "main.h"

/**
 * print_sign - Print sign of a number.
 *
 * @n: The input number as an integer.
 *
 * Return: 1 for greater than zero. 0 for zero. -1 for less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
