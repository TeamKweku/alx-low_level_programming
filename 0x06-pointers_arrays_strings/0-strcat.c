#include "main.h"
/**
  * _strcat - function that concatenates two strings
  * @dest: the destination string
  * @src: the string to be concatenated
  *
  * Return: pointer to concatenated string
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
