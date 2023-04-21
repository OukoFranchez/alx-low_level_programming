#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed btn numbers
 * @n: The number of integers passed in the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, value;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(numbers, int);
		printf("%d", value);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(numbers);
}

