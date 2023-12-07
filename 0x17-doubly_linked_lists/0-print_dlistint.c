#include "lists.h"

/**
 * print_dlistint - fxn that prints a doubly linked list
 * @h: head of the linked list
 * Return: Number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}

	return (number);
}
