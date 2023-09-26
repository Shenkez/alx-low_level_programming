#include "lists.h"
/**
 * free_listint - frees a each element of a list
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
	listint_t  *ptr;

	while (head != NULL)
	{
		ptr = head;
		head->next = head;
		free(ptr);
	}
}

