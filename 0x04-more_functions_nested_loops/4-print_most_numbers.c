#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9
 * followed by a new line in exception of 2 & 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
