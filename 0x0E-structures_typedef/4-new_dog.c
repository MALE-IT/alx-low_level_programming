#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
  *_strlen - a function that returns the length of a string.
  *@s: the string that need length
  *Return: length of str
  */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	return (len);
}

/**
  *_strcpy -  copies the string pointed to by src
  *including the terminating null byte (\0)
  *@dest: destination array
  *@src: source array
  *Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}

/**
  *new_dog - creates a new dog
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner of the dog
  *Return: pointer to new dog or NULL if fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
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
