#include "main.h"

/* function to check if the string is palindrome recursively */

int check_palindrome(char *s, int i, int len);

/* function to calculate the length of a string recursively */

int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: reverses string
 *
 * Return: 1 if a palindrom, 0 if otherwise
 */
int is_palindrome(char *s)
{
	/* If s is an empty string, return 1 */

	if (*s == 0)
		return (1);

	/* call check_pal function to check if s is palindrome */

	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	/* If the current character is null terminator,*/
	 /* return 0 to indicate end of string */

	if (*s == '\0')
		return (0);

	/* return 1 and add the length of the
	 * remaining string to count the length of the string recursively */

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: the string to check
 * @i: the iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if its not
 */
int check_palindrome(char *s, int i, int len)
{
	/* If the first character and last character
	 * are not equal, the string is not palindrome */

	if (*(s + i) != *(s + len - 1))
		return (0);

	/* If i is greater than or equal to length,
	 * this means that all characters have been compared */

	if (i >= len)
		return (1);
	/* recursively compare the next pair of characters in the string */

	return (check_palindrome(s, i + 1, len - 1));
}
