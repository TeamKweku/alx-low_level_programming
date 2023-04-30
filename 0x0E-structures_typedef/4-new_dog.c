#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
  * new_dog - function that creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner
  *
  * Return: pointer to new created dog or NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);
}

/**
  * _strlen - returns the length of a string
  * @s: pointer to string
  *
  * Return: the length of string
  */
int _strlen(char *s)
{
	return (*s != '\0' ? 1 + _strlen(s + 1) : 0);
}

/**
  * _strcpy - functioin that copies a string pointed to by src
  * @dest: destination string copied to
  * @src: the string being copied
  *
  * Return: a pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';

	return (dest);
}
