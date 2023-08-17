#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node to a doubly linked lists' tail
 * @head: pointer head node
 * @num: data of the new node(int)
 * Return: new node's address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int num)
{
	dlistint_t *tail_node;
	dlistint_t *current_node;

	tail_node = malloc(sizeof(dlistint_t));
	if (tail_node == NULL)
		return (NULL);
	tail_node->n = num;
	if (*head == NULL)
	{
		*head = tail_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next)
			current_node = current_node->next;
		current_node->next = tail_node;
		tail_node->prev = current_node;
	}
	return (tail_node);
}
