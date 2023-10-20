#include "lists.h"

/**
 * add_node - adds a node at the beginning of a linked list
 * @head: address of pointer to head node
 * @str: new string to add
 *
 * Return: length of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int x = 0;

	while (str[x])
		x++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = x;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
