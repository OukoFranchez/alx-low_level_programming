#include "main.h"

/**
 * _strcmp - compares two stringd
 * @s1: 1st string
 * @s2: 2nd string
 * Return: the value of the result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != '\0')
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s1);
}
