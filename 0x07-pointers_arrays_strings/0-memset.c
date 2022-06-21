#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @s: the array
 * @b: what the array should be filled with
 * @n: the number of bytes the array should be filled
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
