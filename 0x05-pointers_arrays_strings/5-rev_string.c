#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string being reversed
 *
 * Description: This function reverses a string by swapping the characters from
 * both ends of the string, moving towards the center,
 * until the whole string is reversed
 */
void rev_string(char *s)
{
	int i, j;

	char temp;

	/* calculate the string's length */
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	/* swap characters from both ends of string */
	j = i - 1;

	i = 0;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}


