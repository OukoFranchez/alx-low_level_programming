#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: dest string
 * @s2: source string
 * @n: no of bytes from s2 to s1
 * Return: pointer pointing the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_concat;
	unsigned int len_1 = 0, len_2 = 0, i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	while (s1[len_1] != '\0')
		len_1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[len_2] != '\0')
		len_2++;

	ptr_concat = malloc(sizeof(char) * (len_1 + n + 1));

	for (i = 0; i < len_1; i++)
		ptr_concat[i] = s1[i];
	for (i = 0; i < n && s2[i] != '\0'; i++)
		ptr_concat[len_1 + i] = s2[i];

	ptr_concat[len_1 + i] = '\0';

	return (ptr_concat);
}
