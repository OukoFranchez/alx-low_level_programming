#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_char - function declaration
 *
 * Description - print _putchar, has no arguments
 *
 * Return: Always 0 (Success)
 */

char print_char(void);

/**
 * main - Entry Point
 *
 * Description - calls print_char()
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	print_char();
	return (0);
}

/**
 * print_char - function definition
 *
 * Description - prints out '_putchar'
 *
 * Return: has no return value
 */

char print_char(void)
{
	char myStringArray[] = "_putchar\n";
	int index = 0;

	while (myStringArray[index] != '\0')
	{
		char letter = myStringArray[index];

		putchar(letter);
		index++;
	}
	return (0);
}
