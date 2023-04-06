#include "main.h"
#include <math.h>

/**
 * primeHelper - determines if a number is a prime number
 * @n: the number being checked
 * @i: the divisor to check if n is divisible by
 * Return: 1 if it prime otherwise 0
 */
int primeHelper(int n, int i)
{
	/* if n < 2 its not prime */
	if (n < 2)
	{
		return (0);
	}

	/* if i is greater than n's square root, n is prime */
	if (i > (int) sqrt(n))
	{
		return (1);
	}

	/* if n is divisible by i it isn't prime */
	if (n % i == 0)
	{
		return (0);
	}

	/* check if n is divisible by next number */

	return (primeHelper(n, i + 1));
}

/**
 * is_prime_number - determines whether a number is prime
 * @n: the number being checked
 * Return: 1 if prime otherwise 0
 */
int is_prime_number(int n)
{
	/* begin with the divisor of 2 */
	return (primeHelper(n, 2));
}
