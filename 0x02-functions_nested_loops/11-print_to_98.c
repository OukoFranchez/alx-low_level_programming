#include "main.h"
/**
 * print_to_98 - printing all natural numbers from n to 98
 * @n: the starting natural number
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar(n + '0');
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
