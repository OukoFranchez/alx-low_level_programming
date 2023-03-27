#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: String whose character is printed
 */
void puts2(char *str)
{
	int i;

	/* loop through each character of the string*/
	for (i = 0; str[i] != '\0'; i++)
	{
		/* if the index is even, print the character*/
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
