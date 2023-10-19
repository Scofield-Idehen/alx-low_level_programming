#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 * @h: The head of the linked list
 *
 * Return: The Numbers of elements in the linked lists
 **/
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 0; h; i++)
	{
		printf("[%u] %s\n", (h->str != NULL) ? h->len : 0,
				(h->str != NULL) ? h->str : "(nil)");
		h = h->next;
	}

	return (i);
}
