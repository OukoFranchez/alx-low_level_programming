#include <stdio.h>
#include <math.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;

	long int i;

	/* divide by 2 until n is odd*/
	while (n % 2 == 0)
	{
		n /= 2;
	}
	/* check odd factors up to the square root of n */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	/* if n is still greater than 2, it must be a prime factor*/
	if (n > 2)
	{
		printf("%ld\n", i - 2);
	}
	else
	{
		/* the largest prime factor was the last one divided out*/
		printf("%ld\n", i - 2);
	}

	return (0);
}
