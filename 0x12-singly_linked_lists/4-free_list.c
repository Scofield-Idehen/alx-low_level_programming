#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Start of the list t list
 **/
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	for (; head;)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}

}
