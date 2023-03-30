#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: one of the strings
 * @src: the other string
 * Return: pointer resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*(dest++) = *(src++);
	}

	*dest = '\0';

	return (dest_start);
}
