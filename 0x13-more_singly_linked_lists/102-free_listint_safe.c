#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include "lists.h"

/**
 * _realloc1 - Reallocates a memory block
 * @ptr: pointer to the previous memory block
 * @old_size: size the old memory block
 * @new_size: size of new memory block
 *
 * Return: pointer to the new memory block otherwise NULL
 */
void *_realloc1(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size = old_size < new_size ? old_size : new_size;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		new_ptr = malloc(new_size);
		if (new_ptr != NULL)
		{
			for (i = 0; i < min_size; i++)
				*((char *)new_ptr + i) = *((char *)ptr + i);
			free(ptr);
			return (new_ptr);
		}
		free(ptr);
		return (NULL);
	}
	else
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
}

/**
 * exists1 - Checks if an item exists in the given array
 * @arr: array to look in
 * @n: length of the array
 * @item: item to look for
 *
 * Return: 1 if it exists, otherwise, 0
 */
char exists1(void **arr, size_t n, void *item)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		if (*(arr + i) == item)
			return (1);
	}
	return (0);
}

/**
 * free_nodes - Frees a list of nodes
 * @nodes_ptr: array of node addresses
 * @n: number of node addresses
*/
void free_nodes(void **nodes_ptr, size_t n)
{
	size_t i;
	listint_t *node;

	for (i = 0; i < n; i++)
	{
		node = (listint_t *)(*(nodes_ptr + i));
		if (node != NULL)
			free(node);
	}
}

/**
 * free_listint_safe - Frees a listint_t list
 * @h: node at the beginning of the list
 *
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	void **nodes_addr = NULL;
	listint_t *node;
	size_t i = 0, size = 0, incr = 15;

	if (h != NULL && *h != NULL)
	{
		node = *h;
		while (node != NULL)
		{
			if (i >= size)
				nodes_addr = _realloc1(nodes_addr,
															sizeof(void *) * size, sizeof(void *) * (size + incr));
			if (nodes_addr != NULL)
			{
				size += (i >= size ? incr : 0);
				if (exists1(nodes_addr, i, (void *)node))
				{
					break;
				}
				*(nodes_addr + i) = (void *)node;
				i++;
				node = node->next;
			}
		}
		free_nodes(nodes_addr, i);
		*h = NULL;
		if (nodes_addr != NULL)
			free(nodes_addr);
	}
	h = NULL;
	return (i);
}
