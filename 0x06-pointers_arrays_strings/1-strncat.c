#include "main.h"
/**
  * _strncat - function that concatenates to a specified
  * length of a string to a buffer
  * @dest: destination buffer to concatenate
  * @src: source string
  * @n: specificed lenth of src to concatenate
  *
  * Return: pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
