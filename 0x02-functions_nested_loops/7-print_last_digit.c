#include "main.h"
/**
 * print_last_digit - prints an integer's last digit
 *
 * @n: integer whose last digit is printed
 *
 * Return: Always return integer's last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);

	return (last_digit);
}
