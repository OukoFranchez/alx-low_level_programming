#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: no. of arguments
 * @argv: array containing the arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int cents;
	int num_coins = 0; /* initialize num_coins to 0 */

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; cents > 0; num_coins++)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5 && cents < 10)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
	}

	printf("%d\n", num_coins);
	return (0);
}

