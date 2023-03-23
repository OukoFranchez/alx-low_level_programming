#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer being printed
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0) /* handling negative no.s*/
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0'); /* print the last digit*/
}

