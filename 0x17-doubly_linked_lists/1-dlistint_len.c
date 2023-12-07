#include "lists.h"

/**
 * dlistint_len - No of elements in link dlistint_t list
 * @h: Head of the link list
 * Return: Number of element
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
