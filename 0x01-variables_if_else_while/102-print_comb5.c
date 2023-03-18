#include <stdio.h>
/**
 * main - Entry Point
 *
 * program printing all possible combinations of 2 2digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	int j = 0;

	while (i <= 99)
	{
		j = i + 1; /* start frm next no. to avoid repetition*/
		while (j <= 99)
		{
			putchar((i / 10) + '0'); /* printing tens digit of i*/
			putchar((i % 10) + '0'); /* printing ones digit of i*/
			putchar(' '); /* print space*/
			putchar((j / 10) + '0'); /* printing tens digit of j*/
			putchar((j % 10) + '0'); /* printing ones digit of j*/
			if (i == 98 && j == 99)
			{
				putchar('\n');
			}
			else /* otherwise print comma and space*/
			{
				putchar(',');
				putchar(' ');
			}
			j++; /* move to the next number*/
		}
		i++; /* move to the next number*/
	}
	return (0);
}

