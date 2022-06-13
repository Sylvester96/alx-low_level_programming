#include "main.h"

/** 
 * puts2 - prints every other charater of a string,
 * starting with the first character
 * @str: input string
 * Return: (0)
 */

void puts2(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
		i++;
	i--;

	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}

	_putchar('\n');
}
