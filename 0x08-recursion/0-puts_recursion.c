#include "main.h"
/**
  * _puts_recursion - function that prints a string
  * @s: takes a pointer to a string as input
  *
  * Return: nothing
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
