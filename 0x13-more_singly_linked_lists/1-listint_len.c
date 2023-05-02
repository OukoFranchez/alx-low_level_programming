#include "lists.h"
/**
 * listint_len - calculates the number of elements in a linked listint_t list
 * @h: The linked list whose number of elements is being calculated
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t number = h ? 1 : 0;
	listint_t *p = h ? h->next : NULL;

	if (p)
	{
		while (p)
		{
			number++;
			p = p->next;
		}
	}
	return (number);
}
