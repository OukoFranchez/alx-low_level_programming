#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @h: head node
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *temp;

	if (h == NULL)
		return;
	while (h)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
}
