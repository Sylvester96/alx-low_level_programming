#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: (0)
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')
		i++;
	
	i--;

	for (j = 0; j <= i; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
