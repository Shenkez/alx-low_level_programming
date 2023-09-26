#include "lists.h"
/**
 * print_listint - traversing the elements of a list
 * @h: a pointer pointing to the address of the first node
 * Return: returns the number of elements in a list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
