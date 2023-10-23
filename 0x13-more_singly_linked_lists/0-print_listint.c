#include "lists.h"

/**
 * print_listint - A function that prints all the elements
 *                of a listint_t list.
 * @h: Points to the head of the list.
 * Return: The number of nodes.
 **/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
