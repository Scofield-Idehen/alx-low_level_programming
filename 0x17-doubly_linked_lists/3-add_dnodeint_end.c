#include "lists.h"

/**
 * add_dnodeint_end - add a new node at end of a dlistint_t list
 * @head: head of list
 * @n: value of new node
 * Return: the address of new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *prev;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	for (prev = NULL; *head != NULL; head = &(*head)->next)
		prev = *head;

	new_node->next = NULL;
	new_node->prev = prev;
	new_node->n = n;
	*head = new_node;

	return (new_node);
}
