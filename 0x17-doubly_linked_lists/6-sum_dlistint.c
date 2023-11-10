#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: the head pointer
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			res += head->n;
			head = head->next;
		}
	}
	return (res);
}
