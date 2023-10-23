#include "lists.h"

/**
 * listint_len - func name
 * @h: Pointer to the head of the list
 *
 * Return: Num of elements
 **/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
