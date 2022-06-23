#include "main.h"
#include <stdio.h>

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds natural square root, if it exists
 * @num: variable holding natural sqrt.
 * @root: variable of original input value
 * Return: return natural sqrt or -1 if one does not
 */

int find_sqrt(int n, int m)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural sqrt of a number
 * @n: original value
 * Return: (0)
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
