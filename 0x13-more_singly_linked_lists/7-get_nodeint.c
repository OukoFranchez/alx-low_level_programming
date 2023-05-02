#include "lists.h"

/**
 * get_nodeint_at_index - Gets the node at a given index
 * @head: node at beginning of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the node if otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	for (i = 0; node && i <= index; i++)
	{
		if (i == index)
			return (node);
		node = node->next;
	}
	return (NULL);
}
