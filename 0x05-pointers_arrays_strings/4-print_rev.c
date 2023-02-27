#include "main.h"
/**
  * print_rev - a function to print a string in reverse
  * @s: pointer to a string
  *
  * Return: nothing
  */
void print_rev(char *s)
{
	int n;

	n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}

	for (n -= 1; n >= 0; n--)
	{
		_putchar(*(s + n));
	}
	_putchar('\n');
}
