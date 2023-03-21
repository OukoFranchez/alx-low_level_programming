#include "main.h"
/**
 * times_table - printing the the 9 times tables
 * starting from 0
 *
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 10; a++) /*loop through rows 0-9*/
	{
		for (b = 0; b <= 10; b++) /*loops through columns 0-9*/
		{
			c = b * a; /*calculate the product of a & b*/

			if (b == 0)
			/*for the 1st column just print the product*/
			{
				_putchar(c + '0');
			}

			if (c < 10 && b != 0) /*if the product is < 10, add padding spaces*/
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c >= 10)
				/*if the product is 10 or greater, print digits separately*/
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0'); /*print tens digit*/
				_putchar((c % 10) + '0'); /*print ones digit*/
			}
		}
		_putchar('\n');
	}
}

