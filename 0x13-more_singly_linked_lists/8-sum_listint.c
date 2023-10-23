#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n)
 * of
 * @head: pointer to the first node in the list
 * Return: the sum of all the data (n), or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
