#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position.
 * @head: pointer to pointer of the first node in the list
 * @idx: index of list where the new node should be added, starting at 0
 * @n: integer to be included in the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int count;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new ==  NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;

		return (new);
	}

	for (count = 0; *head != NULL; count++)
	{
		if (count + 1 == (int) idx)
		{
			new->next = (*head)->next;

			(*head)->next = new;

			return (new);
		}

		head = &(*head)->next;
	}

	return (NULL);
}
