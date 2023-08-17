#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at specified index
 * @head: head node
 * @index: index being checkedt
 * Return: address of the node, or NULL if it's not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (index == counter)
			return (head);
		head = head->next;
		counter++;
	}
	return (0);
}
