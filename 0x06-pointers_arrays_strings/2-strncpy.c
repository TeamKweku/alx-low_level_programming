#include "main.h"
/**
  * _strncpy - a function that copies n characters of a string
  * @dest: desttination copied string
  * @src: source to be copied from
  *
  * Return: pointer to copied string(dest)
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] ; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
