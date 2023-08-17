#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints doubly linked list
 * @h: head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
