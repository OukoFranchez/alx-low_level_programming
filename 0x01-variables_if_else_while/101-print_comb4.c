#include <stdio.h>
/**
 * main - Entry Point
 *
 * program printing all possible diff combintns of 3 digits
 *
 * Return 0: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	int j = 1;

	int k = 2;

	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	putchar('\n');
	return (0);
}
