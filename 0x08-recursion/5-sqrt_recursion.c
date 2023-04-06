#include "main.h"

/**
 * squareRoot_Helper - function that helps in computation of natural-
 * square root through recursion
 * @n: the number whose Square root is being computed
 * @guess: the current guess of the square root
 * Return: n's natural square root or -1 if doesn't exist
 */
int squareRoot_Helper(int n, int guess)
{
	int nextGuess = (guess + n / guess) / 2;

	/* guess has converged to the natural square root */
	if (nextGuess == guess)
	{
		return (guess);
	}

	 /* guess has started decreasing, return -1 */
	if (nextGuess < guess)
	{
		return (-1);
	}

	return (squareRoot_Helper(n, nextGuess));
}

/**
 * _sqrt_recursion - computes a number's natural Square root
 *  @n: the number whose square root is being computed
 *  Return: square root or -1 if doesn't have one
 */
int _sqrt_recursion(int n)
{
	/* a negative number's square root can't be computed */
	if (n < 0)
	{
		return (-1);
	}
	/* 0 & 1's natural Square root is themselves */
	if (n == 0 || n == 1)
	{
		return (n);
	}
	/* begin with an initial guess of n/2 */
	return (squareRoot_Helper(n, n / 2));
}
