/* #include "main.h" */

/**
 * leet- encodes a string int0 1337
 * @str: the string to encode
 * Return: The encoded string
 */
char *leet(char *str)
{
	int i, j;

	/* Declare arrays of characters to be replaced with leet codes */
	char *leet_chars = "aAeoOtTlL";
	char *leet_nums = "44330771";

	/* Iterate over input string */
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			/* If a character in the input string matches a character to be replaced */
			if (str[i] == leet_chars[j])
			{
				/* Replace the character wit the corresponding leet code */
				str[i] = leet_nums[j];
				break;
			}
		}
	}
	/* return the modified string */
	return (str);
}
