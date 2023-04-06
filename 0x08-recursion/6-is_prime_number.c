#include "main.h"

/**
 * isPrime - detects if an input number is a prime number
 * @n: input number
 * @i: iterator
 * Return: 1 if n is a prime number and 0 if n is not a prime number
 */
int isPrime(unsigned int n, unsigned int i)
{
	/* If n is divisible by c, then it's not a prime number */
	if (n % i == 0)
	{
		/* If n is equal to c, then it is a prime number */
		if (n == i)
			return (1);

		else
			return (0);
	}
	/* Otherwise, check if n is prime by incrementing c */
	/* and calling is_prime recursively */

	return (0 + isPrime(n, i + 1));
}

/**
 * is_prime_number - detects if the input number is a prime number
 * @n: input number
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */
int is_prime_number(int n)
{
	/* Check for special cases first: 0, negative numbers, and 1 are not prime */
	if (n == 0)
		return (0);

	if (n < 0)
		return (0);

	if (n == 1)
		return (0);

	/* If none of the special cases apply,- */
	/* call is_prime to determine if n is prime */
	return (isPrime(n, 2));
}
