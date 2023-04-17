#include "dog.h"
#include <stdlib.h>

/* function for string length */
/**
 * _strlen -returns string length
 * @s: string whose length is being determined
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while ((s[i]) != '\0')
		i++;

	return (i);
}

/* function that copies a string */
/**
 * _strcpy - copies string pointed by src
 * @dest: pointer to the buffer in which string is being copied to
 * @src: pointer to the string being copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

 /* a function that creates a new dog */
/**
 * new_dog - creates new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *new_owner;
	int len_name, len_owner;

	/* allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* getting string length of name and owner */
	len_name = _strlen(name);
	len_owner = _strlen(owner);

	/* allocate memory for 4 the copy of name and owner */
	new_name = malloc(sizeof(char) * (len_name + 1));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = malloc(sizeof(char) * (len_owner + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	/* copying name and owner strings to new memory locations */
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);

	/* set the name, age, and owner of new dog */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}

