#include <main.h>

/**
 * print_alphabet - print the alphabet 10times
 * in lowercase followed by a new line
 */
void print_alphabet(void)
{
	int i;
	int k;

	for (i = 0; i <= 10; i++)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
