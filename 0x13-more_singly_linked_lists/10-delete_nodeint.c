#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: node at beginning of the list
 * @index: index of node to delete
 *
 * Return: 1 if the deletion was successful else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node;
	listint_t *prev;

	if (head && *head)
	{
		prev = NULL;
		for (i = 0; i <= index; i++)
		{
			if (i > 0 && !prev)
				break;
			if (i == index)
			{
				if (prev && prev->next)
				{
					node = prev->next;
					prev->next = prev->next->next;
					free(node);
					return (1);
				}
				if (!prev)
				{
					node = *head;
					*head = node->next;
					free(node);
					return (1);
				}
			}
			prev = i == 0 ? *head : prev->next;
		}
	}
	return (-1);
}
