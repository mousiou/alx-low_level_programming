#include "lists.h"

/**
 * list_len - returns the length of linked list
 * @h: pointer to the first node
 *
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
