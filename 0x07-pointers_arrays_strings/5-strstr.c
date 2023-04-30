#include "main.h"
/**
  * _strstr - finds the occurence of the string needle in the
  * string haystack
  * @haystack: string to be searched
  * @needle: substring to search
  *
  * Return: pointer to the beginning of located substring or NULL
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *ptr_haystack = haystack;
		char *ptr_needle = needle;

		while (*ptr_haystack == *ptr_needle && *ptr_needle != '\0')
		{
			ptr_haystack++;
			ptr_needle++;
		}
		if (*ptr_needle == '\0')
			return (haystack);
	}

	return (NULL);
}
