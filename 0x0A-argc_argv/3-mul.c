#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: no of arguments
 * @argv: array containing the arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x, y, product;

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		product = x * y;

		printf("%d\n", product);

	}
	return (0);
}
