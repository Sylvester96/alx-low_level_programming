#include "main.h"

/**
 * _strcat - functions that concatenates two strings
 * @dest: Destination string
 * @src: String for adding
 * Return: (0)
 */

char *_strcat(char *dest, char *src)
{
	char *new_dest = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (new_dest);
}
