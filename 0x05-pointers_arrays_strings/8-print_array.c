#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array name
 * @n: array index total
 * Return: (0)
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	putchar('\n')
}
