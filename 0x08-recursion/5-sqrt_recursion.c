#include "main.h"
#include <stdio.h>

/**
 * sqrt_loop - Finds natural square root, if it exists
 * @n: variable holding natural sqrt.
 * @m: variable of original input value
 * Return: return natural sqrt or -1 if one does not
 */

int sqrt_loop(int n, int m)
{
	if (n == m * m)
		return (n / m);
	else if (n < m * m)
		return (-1);

	return (sqrt_loop(m + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural sqrt of a number
 * @n: original value
 * Return: (0)
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	else if (n < 0)
		return (-1);

	return (sqrt_loop(1, n));
}
