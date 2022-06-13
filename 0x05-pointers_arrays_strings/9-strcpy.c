#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination string
 * @src: string to be copied from
 * Return: (0)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != 0)
		i++;

	for (; j <= i; j++)
		dest[j] = src[j];

	return (dest);
}
