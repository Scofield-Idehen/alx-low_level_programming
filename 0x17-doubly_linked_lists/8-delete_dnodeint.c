#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes the node
 * @head: head of list
 * @index: index of node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t idx;
	dlistint_t *current, *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	for (idx = 0; current != NULL; idx++)
	{
		if (idx == index)
		{
			tmp = current->next;

			if (current->prev)
				current->prev->next = current->next;

			if (current->next)
				current->next->prev = current->prev;

			free(current);
			if (idx == 0)
				*head = tmp;
			return (1);
		}

		current = current->next;
	}

	return (-1);
}
