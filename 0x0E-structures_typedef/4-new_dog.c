#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return string len
 * @s: string input
 * Return: retunr input len.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = NULL;

	my_dog = (dog_t *)malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = (char *)malloc(sizeof(char) * (_strlen(name) + 1));
	my_dog->owner = (char *)malloc(sizeof(char) * (_strlen(owner) + 1));
	if (my_dog->name == NULL || my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->name, name);
	_strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}
