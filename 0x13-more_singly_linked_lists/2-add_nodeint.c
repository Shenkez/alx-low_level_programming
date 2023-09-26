#include "lists.h"
/**
 * add_nodeint - adds a node at the
 * beginning of a list
 * @head: double pointer pointing to the first node
 * @n: holds the values of the nodes
 * Return: returns the new node ptr
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);

}
