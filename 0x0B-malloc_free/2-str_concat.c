#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: pointer to allocated space with new str
  */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, total;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total = len1 + len2;
	concat_str = malloc((total + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < total)
	{
		if (i <= len1)
			concat_str[i] = s1[i];
		if (i >= len1)
		{
			concat_str[i] = s2[j];
			j++;
		}
		i++;
	}

	concat_str[i] = '\0';

	return (concat_str);
}
/**
  * _strlen - function that returns len of str
  * @s: the string to be checked
  *
  * Return: an int value for len of string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
