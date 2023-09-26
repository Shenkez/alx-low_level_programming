#include "lists.h"
/**
 * free_listint2 - frees the pointer ptr
 * @head: a pointer to pointer
 * Return: returnif the head is null
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *current;

	if (*head == NULL)
	{
		return;
	}

	current = *head;
	while (current != NULL)
	{
		ptr = current;
		current = current->next;
		free(ptr);
	}
	*head = NULL;
}
