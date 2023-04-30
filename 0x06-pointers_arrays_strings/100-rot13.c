#include "main.h"
/**
  * rot13 - function that encodes a string using roo13
  * @str: string to encode
  *
  * Return: encoded string
  */
char *rot13(char *str)
{
	int i;
	int j;
	int letters_of_alph;

	char input[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	letters_of_alph = 52;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < letters_of_alph; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}
	return (str);
}
