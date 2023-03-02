#include "main.h"
/**
  * leet - encodes a string into 1337
  * @str: strings value
  *
  * Return: string value
  */
char *leet(char *str)
{
	int i;
	int j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == str1[j])
				str[i] = str2[j];
		}
	}
	return (str);
}
