#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: the string to be search
 * @needle: the substring to be located
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

			if (needle[i + j] == '\0')
				return (haystack + i);
		}
	}

	return ('\0');
}
