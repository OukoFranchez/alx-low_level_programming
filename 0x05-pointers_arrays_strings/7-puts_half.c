#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string being printed
 */
void puts_half(char *str)
{
	int len = 0;

	int i, start;

	/* calculate the length of the string*/
	while (str[len] != '\0')
	{
		len++;
	}

	/* determine starting index for printing*/
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) /2;
	}

	/* print second half of string*/
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
