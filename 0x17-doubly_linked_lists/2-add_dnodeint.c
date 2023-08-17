#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node to beginning of a doubly linked list
 * @head: head node's address
 * @num: data of the new node(int)
 * Return: new node's address
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int num)
{
	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);
	new_head->n = num;
	new_head->next = *head;
	if (*head)
		(*head)->prev = new_head;
	*head = new_head;
	return (new_head);
}
