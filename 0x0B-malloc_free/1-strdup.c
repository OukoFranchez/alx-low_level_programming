#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string being duplicated
 * Return: On success, the _strdup function returns a pointer to
 * the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ptr;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[len] = '\0';

	return (ptr);
	free(ptr);

}
/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of @s.
 */

int _strlen(char *s)
{
	int lenStr = 0;

	while (*s++)
		lenStr++;

	return (lenStr);
}

