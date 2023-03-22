#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Description: fibonacii sequence
 * Return: 0
 */

int main(void)
{
	int counter = 2;
	double num1 = 1;
	double num2 = num1 + 1;
	double num3 = num1 + num2;

	printf("%.0f, ", num1);
	printf("%.0f, ", num2);

	while (counter < 98)
	{
		counter++;
		printf("%.0f", num3);
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;

		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
