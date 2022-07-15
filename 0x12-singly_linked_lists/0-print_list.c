#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of tupe listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}
