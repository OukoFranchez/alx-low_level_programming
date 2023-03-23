#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer being printed
 */

void print_number(int n)
{
	if (n < 0) /* handling negative no.s*/
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 > 0) /* recursively printing digits*/
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0'); /* print the last digit*/
}

