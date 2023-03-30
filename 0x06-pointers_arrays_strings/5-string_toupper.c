#include "main.h"

/**
 * string_toupper - changes all lowercase letters in a string to uppercase
 * Return: the converted string
 * @str: a pointer to the string to be converted
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}

	return (str);
}
