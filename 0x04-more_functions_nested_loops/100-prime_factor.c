#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i, n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
	}
	printf("%lu\n", i);

	return (0);
}
