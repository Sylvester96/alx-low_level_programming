#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to be search
 * @needle: the substring to be located
 *
 * Returns: if the substring located - a pointer to the beginning
 * of the located substring. If the substring is not located - NULL
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
