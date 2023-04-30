#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
  * _strdup - returns a copy of a given string parameter
  * @str: string to create duplicate
  *
  * Return: pointer to string
  */
char *_strdup(char *str)
{
	int len;
	int i;
	char *dupl_str;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	dupl_str = malloc((len + 1) * sizeof(char));
	if (dupl_str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dupl_str[i] = str[i];
	dupl_str[i++] = '\0';

	return (dupl_str);
}
/**
  * _strlen - returns len of string
  * @s: the string to be checked
  *
  * Return: an int value of len of string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

