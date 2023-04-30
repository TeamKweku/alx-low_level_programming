#include <stdlib.h>
#include "main.h"

int word_count(char *str);
int str_len(char *str);
/**
  * strtow - function that splits a string into words
  * and returns a pointer to new array
  * @str: string to be split by spaces
  *
  * Return: pointer to array of split words
  */
char **strtow(char *str)
{
	char **strings;
	int index, words, i, letters, j;

	index = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = word_count(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		while (str[index] == ' ')
			index++;
		letters = str_len(str + index);

		strings[i] = malloc(sizeof(char) * (letters + 1));
		if (strings[i] == NULL)
		{
			for (; i >= 0; i--)
				free(strings[i]);
			free(strings);
			return (NULL);
		}

		for (j = 0; j < letters; j++)
			strings[i][j] = str[index++];
		strings[i][j] = '\0';
	}
	strings[i] = NULL;

	return (strings);
}

/**
  * word_count - function that counts numbers of words in string
  * @str: string to be counted
  *
  * Return: (int) number of words in string
  *
  */
int word_count(char *str)
{
	int i, words, len;

	i = 0, words = 0, len = 0;

	for (i = 0; str[i]; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			words++;
			i += str_len(str + i);
		}
	}
	return (words);
}

/**
  * str_len - gets start and ending of a string
  * @str: string to be searched
  *
  * Return: returns index of end of word pointed to by string
  */
int str_len(char *str)
{
	int i, len;

	i = 0, len = 0;

	while (str[i] && str[i] != ' ')
	{
		len++;
		i++;
	}

	return (len);
}
