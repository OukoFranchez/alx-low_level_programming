#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to the newly allocated space in memory which
 * contains contents of s1 followed by s2 and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len = (_strlen(s1) + _strlen(s2));

	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	_strcpy(ptr, s1);
	_strcat(ptr, s2);


	/* free(ptr); */
	return (ptr);

}

/**
 * *_strcpy - copies string pointed by src to dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
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

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}

