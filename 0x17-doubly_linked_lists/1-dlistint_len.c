#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints length doubly linked list's length
 * @h: head node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
