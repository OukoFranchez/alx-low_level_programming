#include "main.h"

/**
 * _strlen - returns a string's length
 * @s: string whose length is returned
 * Return: The lenth of the string
 */
int _strlen(char *s)
{
	int stringlength;

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		stringlength++;
	}

	return (stringlength);
}

