#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - the function that finds the length of the string
 * @str: string to be measured
 * Return: length of the string
 */
int _strlen(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * _strcopy - function to copy string pointed by source
 * @dest: destination buffer where the string will be copied to
 * @src: the source string that will be copied
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - the function that creates a new dog.
 * @name: pointer to a char array representing the name of the dog.
 * @age: a floating-point value representing the age of the dog
 * @owner: pointer to a char array representing the owner of the dog.
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *j;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	j = malloc(sizeof(dog_t));
	if (j == NULL)
		return (NULL);
	j->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (j->name == NULL)
	{
		free(j);
		return (NULL);
	}
	j->name = _strcopy(j->name, name);
	j->age = age;
	j->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (j->owner == NULL)
	{
		free(j->name);
		free(j);
		return (NULL);
	}
	j->owner = _strcopy(j->owner, owner);
	return (j);
}
