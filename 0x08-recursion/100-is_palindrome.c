#include "main.h"
/**
  * _strlen - returns the length of a string
  * @s: pointer to the string
  *
  * Return: length of string
  */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
  * palindrome - returns if a string is a palindrome
  * @s: string to be checked
  * @start: start of string
  * @len: length of string
  *
  * Return: 1 or 0 if palindrome or not
  */
int palindrome(char *s, int start, int len)
{
	if (start == len)
		return (1);
	if (s[start] != s[len])
		return (0);
	if (start < len + 1)
		return (palindrome(s, start + 1, len - 1));
	return (1);
}
/**
  * is_palindrome - checks if a string is palindrome
  * @s: pointer to string
  *
  * Return: 1 or 1 (success or not)
  */
int is_palindrome(char *s)
{
	int n = _strlen(s);

	if (n == 0)
		return (1);
	return (palindrome(s, 0, n - 1));
}
