#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of the
 * listint_t linked list.
 * @head: pointer to pointer of first node in the list
 * @index: index of the node that is being deleted, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0, prev = *head; i < index - 1 && prev != NULL; i++)
	{
		prev = prev->next;
	}

	if (prev == NULL || prev->next == NULL)
		return (-1);

	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}
