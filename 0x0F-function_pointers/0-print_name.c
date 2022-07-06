#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: string name to be printed
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if (name == NULL || f == NULL)
		return;

	ptr = f;
	ptr(name);
}
