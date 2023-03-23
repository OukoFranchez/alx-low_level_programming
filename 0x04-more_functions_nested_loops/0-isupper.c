#include "main.h"
/**
 * _isupper(int c) - function for defining the upper case
 * @c: the character being checked
 * Return: Returns 1 if c is uppercase and 0 if otherwise
*/
int _isupper(int c)
{
  if (c >= 65 && c <= 90)
  {
    return (1);
  }
  else 
  {
    return (0);
  }
}