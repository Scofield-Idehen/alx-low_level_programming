#include "lists.h"

/**
 * add_nodeint
 * @head: pointer to the first node in the list
 * @n: integer to be included in the new node
 * Return: the address of new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
