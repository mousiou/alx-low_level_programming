#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: address of pointer to head node
 * @str: string to put in the node
 *
 * Return: length of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *t = *head;
	unsigned int x = 0;

	while (str[x])
		x++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = x;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (t->next)
		t = t->next;

	t->next = n;

	return (n);
}
