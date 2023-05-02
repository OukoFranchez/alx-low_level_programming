#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: node at beginning of the list
 *
 * Return: pointer to the first node of the reversed list else, NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	void *next;
	void *prev = NULL;

	if (head && *head)
	{
		while (((*head)->next) != NULL)
		{
			next = (*head)->next;
			(*head)->next = prev;
			prev = *head;
			*head = next;
		}
		(*head)->next = (listint_t *)prev;
	}
	return (*head);
}
