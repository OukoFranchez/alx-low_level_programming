#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name being printed
 * @f: pointer to function printing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	else
	{
		f(name);
	}
}
