#include <stdio.h>
/**
 * main - Entry Point
 *
 * program that print alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
{
	putchar(i);
	i++;
}
putchar('\n');
return (0);
}
