#include "main.h"
/**
  * _memcpy - copies the specified src array to dest
  * @dest: destination for n length copied
  * @src: source to be copied
  * @n: length of source to be copied
  *
  * Return: pointer to copied memory space
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
