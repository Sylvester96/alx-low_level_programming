#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * _calloc - allocates an array of nmemb elements of size bytes
 * @nmemb: number of array elements
 * @size: size of each element, in bytes
 * Return: pointer to first index of array
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);


	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);

	filler = mem;
	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
