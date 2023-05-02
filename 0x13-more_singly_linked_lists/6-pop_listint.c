#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head of a listint_t lists
 * @head: node at beginning of the list
 *
 * Return: head's contents, otherwise 0
 */
int pop_listint(listint_t **head)
{
	int val = 0;
	listint_t *node;

	if (head && *head)
	{
		node = *head;
		val = node->n;
		*head = (*head)->next;
		free(node);
	}

	return (val);
}
