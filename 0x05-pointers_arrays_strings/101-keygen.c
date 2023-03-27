#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
#define PASSWORD_LENGTH 12
#define BUFFER_SIZE 100

int main(void)
{
	char buffer[BUFFER_SIZE];
	char password[PASSWORD_LENGTH + 1];
	int i, j, num_chars;

	srand(time(NULL));

	while (1)
	{
		num_chars = rand() % BUFFER_SIZE;

		for (i = 0; i < num_chars; i++)
		{
			buffer[i] = rand() % 94 + 33;
		}
		j = 0;
		for (i = 0; i < num_chars && j < PASSWORD_LENGTH; i++)
		{
			if (buffer[i] >= '0' && buffer[i] <= '9')
			{
				password[j++] = buffer[i];
			}
			else if (buffer[i] >= 'A' && buffer[i] <= 'Z')
			{
				password[j++] = buffer[i];
			}
		}
		password[j] = '\0';
		printf("%s\n", password);
		if (j == PASSWORD_LENGTH)
		{
			break;
		}
	}

	return (0);
}
