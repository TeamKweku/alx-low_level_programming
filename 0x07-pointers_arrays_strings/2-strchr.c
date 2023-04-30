#include "main.h"
/**
  * _strchr - locates the first occurance of a character in a string
  * @s: string being accessed
  * @c: the character
  *
  * Return: pointer to character address or NULL
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
