#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns str.len
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * *_strcpy - copies string
 * @dest: pointer to copied string
 * @src: string
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int length, a;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	for (a = 0; a < length; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new program(dog)
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int leng1, leng2;

	leng1 = _strlen(name);
	leng2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (leng1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (leng2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
