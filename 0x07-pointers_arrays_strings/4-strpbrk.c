#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: string containing the only accepted bytes
 *
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, of NULL if no such byte found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
				return (s + i);
	}
	return (0);
}
