#include <stdio.h>
/**
 * main - Entry Point
 *
 * This program prints the numbers from 0 to 9, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}
