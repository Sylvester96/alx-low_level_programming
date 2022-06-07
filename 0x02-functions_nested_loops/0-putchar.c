#include <stdio.h>
#include "main.h"

/**
 * main - Print "_putchar"
 *
 * Return; Always 0 (Success)
 */


int main(void)
{
	int i=0;
	char p[9] = "_putchar";

	for  (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');

	return (0);
}
