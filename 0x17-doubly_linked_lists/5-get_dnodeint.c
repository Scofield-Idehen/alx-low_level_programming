#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t linked list
 *
 * @head: Head of the list
 * @index: index of node, starting from 0
 * Return: nth node of  dlistint_t linked lis
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	for (count = 0; head != NULL; head = head->next, count++)
	{
		if (count == index)
			return (head);
	}

	return (NULL);
}
