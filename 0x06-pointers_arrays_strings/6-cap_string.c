#include "main.h"

/**
 * cap_string - capitalizes every word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	/* Declare variables to iterate over string and separators*/
	int i, j;

	/* Declare an array of separators*/
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	/* Iterate over string*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/* If first character is lowercase, capitalize it*/
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		
		/* Check for separator characters*/
		for (j = 0; j < 13; j++)
		{
			if (s[i] == spe[j])
			{
				/* If next character is lowercase, capitalize it*/
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	/* Return modified string*/
	return (s);
}
