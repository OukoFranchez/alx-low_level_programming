#include <stdio.h>
/**
 * main - Entry point
 *
 * Program printing lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}
	putchar('\n');
	return (0);
}
