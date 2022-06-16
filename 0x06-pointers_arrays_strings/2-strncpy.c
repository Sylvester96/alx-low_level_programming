#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: maximum number of characters to copy from src
 *
 * Description:
 * works exactly like strncpy from <string.h>
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
