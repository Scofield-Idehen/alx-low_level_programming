#include "lists.h"

/**
 * pop_listint - deletes the head node of  listint_t linked list
 * and returns the head node data (n).
 * @head: pointer to  pointer of the first node in list
 * Return: the head node data (n), or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
