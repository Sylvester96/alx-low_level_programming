#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: (0)
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[i] != '\0')
		i++;

	while (j < i--)
	{
		temp = s[j];
		s[j++] = s[i];
		s[i] = temp;
	}
}
