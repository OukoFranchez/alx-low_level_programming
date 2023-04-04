#include "main.h"
#include <stddef.h>

/**
 * _strchr - function allocating a character in a string
 * @s: the string where the character is allocated
 * @c: the character being checked for
 * Return: a pointer to the 1st occurence of the character-
 * c in the string s or null if otherwise
 */
char *_strchr(char *s, char c)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == c)
		{
			return (&s[y]);
		}
	}
	return (NULL);
}
