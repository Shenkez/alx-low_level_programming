#include "lists.h"
/**
 * listint_len - returns the number of
 * elements in a list
 * @h: a pointer pointing to the first
 * node of the list
 * Return: returns the number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
