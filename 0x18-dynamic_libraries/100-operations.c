#include "operations.h"
/**
 * add - adds two numbers
 * @a: first number
 * @b: the second number
 * Return: the result of the addition
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - substracts the two numbers
 * @a: first number
 * @b: the second number
 * Return: the result of the difference
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: the second number
 * Return: the result
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divides two numbers
 * @a: first number
 * @b: the second number
 * Return: the result
 */
int div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}
/**
 * mod - modulo of two numbers
 * @a: first number
 * @b: the second number
 * Return: the result
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
