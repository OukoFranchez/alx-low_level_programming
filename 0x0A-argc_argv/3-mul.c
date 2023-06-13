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
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
