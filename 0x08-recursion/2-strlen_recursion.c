#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - calculates string length
 * @s: pointer to the string whose length is calculated
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return ( 1 + _strlen_recursion(s + 1));
	}
}
