#include "main.h"
/**
  * _memset - fill memory with a constant byte
  * @s: pointer to the buffer
  * @b: character to fill the memory with
  * @n: the length of memory to fill with constant byte
  *
  * Return: pointer to buffer
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
