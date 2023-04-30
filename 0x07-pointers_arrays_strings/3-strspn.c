#include "main.h"
/**
  * _strspn - gets the length of a prefix of a string
  * @s: string to be checked
  * @accept: prefix of the string
  *
  * Return: unsigned int of length of prefix
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	unsigned int i, j;
	unsigned int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			break;
		counter++;
	}

	return (counter);
}
