#include "main.h"
#include <stdlib>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: rhe number of bytes to be allocated
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
