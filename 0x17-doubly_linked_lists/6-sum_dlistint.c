#include "lists.h"

/**
 * sum_dlistint - sum of all data (n) of a dlistint_t linked list
 * @head: head of list
 * Return: sum of all data
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
