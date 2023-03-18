#include <stdio.h>
/**
 * main - Entry Point
 *
 * program printing all possible different combinations of 2 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 0; /* declare variable num1 and set it to 0*/

	int num2; /*declare variable num2*/

	while (num1 <= 8) /* loop while num1 is less than or equal to 8*/
	{
		num2 = num1 + 1; /* set num2 to num1 + 1*/

		while (num2 <= 9) /* loop while num2 is less than or equal to 9*/
		{
			putchar(num1 + '0'); /* print the character rep by num1 + '0'*/
			putchar(num2 + '0'); /* print the character rep by num2 + '0'*/

			if (num1 != 8 || num2 != 9) /* if this isnt the last combinatn*/
			{
				putchar(','); /* print comma*/
				putchar(' '); /* print space*/
			}

			num2++; /* increment*/
		}

		num1++; /* increment*/

	}

	putchar('\n'); /* print a newline character*/
	return (0);
}

