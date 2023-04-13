#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates the array containing integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored 
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		pointer[i] = min++;

	return (pointer);
}
