#include "main.h"

/**
 * reverse_array - reverses array
 * @a: pointer to the first element of the array
 * @n: no. of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
