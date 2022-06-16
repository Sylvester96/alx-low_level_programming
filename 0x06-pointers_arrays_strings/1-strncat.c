#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: Destination string
 * @src: String to be added
 * @n: Array block
 * Return: (0)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *new_dest = debt;

	while (*dest)
		dest++;

	while (*src && (i < n))
	{
		*dest++ = *src++;
		i++;
	}

	*dest = '\0';

	return (new_dest);
}
