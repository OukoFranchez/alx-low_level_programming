#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: no of arguments
 * @argv: array containing the arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *str = argv[i];
		int y = 0;

		while (str[y] != '\0')
		{
			if (!isdigit(str[y]))
			{
				printf("Error\n");
				return (1);
			}
			y++;
		}
		sum = sum + atoi(str);
	}

	printf("%d\n", sum);

	return (0);
}
