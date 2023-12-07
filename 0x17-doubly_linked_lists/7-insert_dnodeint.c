#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at given position
 * @h: head of the list
 * @idx: index of list where the new node should be added
 * @n: value of node
 * Return: address of the new node, or NULL if failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	for (i = 0; current && i < idx; i++)
		current = current->next;

	if (i == idx && current == NULL)
		return (add_dnodeint_end(h, n));
	else if (current)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->prev = current->prev;
		new_node->next = current;

		if (current->prev)
			current->prev->next = new_node;
		current->prev = new_node;

		return (new_node);
	}

	return (NULL);
}
