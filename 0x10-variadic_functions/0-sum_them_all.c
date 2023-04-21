#include "variadic_functions.h"

/**
 * sum_them_all - gets the sum of all the numbers passed
 * @n: the number of all integers passed
 * Return: returns the sum of all the numbers passed
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0, i;
	va_list sum_parameters;

	if (n == 0)
	{
		return (0);
	}

	va_start(sum_parameters, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(sum_parameters, unsigned int);
	}
	va_end(sum_parameters);

	return (result);
}
