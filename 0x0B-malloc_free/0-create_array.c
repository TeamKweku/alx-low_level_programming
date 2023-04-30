#include <stdlib.h>
#include "main.h"
/**
  * create_array - creates an array of specified bytes(size)
  * @size: size of the array to be created
  * @c: char to be initialized to array
  *
  * Return: pointer to created array
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
