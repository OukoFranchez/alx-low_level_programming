#include "main.h"

/**
 * factorial - gives the factorial of a number
 * @n: the number whose factorial is being found
 * Return: 0 if n > 0 and -1 to indicate an error else factorial
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
