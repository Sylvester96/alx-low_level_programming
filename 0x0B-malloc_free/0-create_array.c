#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the memory to print
 * @c: character to initialize the array with
 *
 * Return: pointer to created array, otherwise NULL if size is 0
 * or the function fails
 */

char *create_array(unsigned int size, char c)
{
	char *buffer = malloc(sizeof(char) * size);
	unsigned int i;

	if (buffer == NULL || SIZE == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
