#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Calculates sum of all data of a listint_t linked list
 * @head: node at beginning of the list
 *
 * Return: sum of the data in each node of the given list if otherwise 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
