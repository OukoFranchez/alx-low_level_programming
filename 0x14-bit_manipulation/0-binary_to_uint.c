#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the string containing the binary number being
 * converted
 * Return: the unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int converted_uint = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		converted_uint = (converted_uint << 1) + (b[i] - '0');
		i++;
	}
	return (converted_uint);
}
