#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node atgiven index
 * @h: pointer to head node
 * @idx: index to insert at
 * @num: data of the new node(int)
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int num)
{
	dlistint_t *current_node, *previous_node, *new_node;
	unsigned int counter = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = num;
	current_node = *h;
	previous_node = NULL;
	do {
		if (idx == counter)
		{
			if (previous_node)
			{
				previous_node->next = new_node;
				new_node->prev = previous_node;
			}
			else
			{
				*h = new_node;
			}
			new_node->next = current_node;
			if (current_node)
				current_node->prev = new_node;
			return (new_node);
		}
		counter++;
		previous_node = current_node;
		if (current_node)
			current_node = current_node->next;
	} while (previous_node);

	free(new_node);
	return (NULL);
}
