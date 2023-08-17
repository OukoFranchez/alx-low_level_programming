#include "lists.h"

/**
 * sum_dlistint - calculates sum of integer data in the list
 * @head: head node
 * Return: the numbers summation, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int summation = 0;

	while (head)
	{
		summation += head->n;
		head = head->next;
	}
	return (summation);
}
