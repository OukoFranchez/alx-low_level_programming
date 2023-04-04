#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: the pointer pointing the pointer to a char
 * @to: the pointer to a char]
 */
void set_string(char **s, char *to)
{
	*s = to;
}
