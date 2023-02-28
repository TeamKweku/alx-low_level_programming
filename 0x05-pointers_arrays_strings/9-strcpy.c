#include "main.h"
/**
  * _strcpy - function that copies a string pointed to by src
  * @dest: destination string copied to
  * @src: the string being copied
  *
  * Return: a pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
