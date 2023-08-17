#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head: pointer to head node
 * @index: index to delete at
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int counter = 0;

	while (current_node)
	{
		if (counter == index)
		{
			if (current_node == *head)
				*head = current_node->next;
			else
				current_node->prev->next = current_node->next;
			if (current_node->next)
				current_node->next->prev = current_node->prev;
			free(current_node);
			return (1);
		}
		counter++;
		current_node = current_node->next;
	}
	return (-1);
}
