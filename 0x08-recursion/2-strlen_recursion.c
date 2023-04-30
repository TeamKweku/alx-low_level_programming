#include "main.h"
/**
  * _strlen_recursion - returns the length of a string
  * @s: pointer to string
  *
  * Return: the length of string
  */
int _strlen_recursion(char *s)
{
	return (*s != '\0' ? 1 + _strlen_recursion(s + 1) : 0);
}
