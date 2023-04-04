#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function printing summation of 2 diagonals-
 * of a square matrix of integers
 * @a: pointer to the 1st element of matrix
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int x, y;
	int summation1 = 0, summation2 = 0;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
			{
				summation1 += *((a + x * size) + y);
			}
			if (x + y == size - 1)
			{
				summation2 += *((a + x * size) + y);
			}
		}
	}
	printf("%d, %d\n", summation1, summation2);

}

