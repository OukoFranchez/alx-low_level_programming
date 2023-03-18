#include <stdio.h>
/**
 * main - Entry Point
 *
 * program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_code = 48; /* ASCII code for '0'*/

	while (digit_code <= 57) /* ASCII code for '9'*/
	{
		if (digit_code != 57)
		{
			putchar(',');
			putchar(' ');
		}
	digit_code++;
	}
	putchar('\n');
	return (0);
}

