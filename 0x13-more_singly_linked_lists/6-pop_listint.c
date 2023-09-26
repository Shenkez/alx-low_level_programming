#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer pointing to the first node
 * Return: the value of a the node's element
 *
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;
	if (head == NULL)

	{
		return (0);
	}
	else
	{
		data = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	return (data);
}
