#include "lists.h"

/**
 * list_len - Returns the count of elements in a linked list_t list
 * @h: The Head of the linked list
 *
 * Return: The Number of elements
 **/
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
		;

	return (i);
}
