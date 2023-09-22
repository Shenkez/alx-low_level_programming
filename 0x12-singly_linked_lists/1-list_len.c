#include "lists.h"
/**
 * list_len - calculates the length of the list
 * @h: pointer used for accessing members of the list
 * Return: returns the number of elements in a list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
