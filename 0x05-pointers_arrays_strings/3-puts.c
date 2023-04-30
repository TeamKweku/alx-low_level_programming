#include "main.h"
/**
  * _puts - prints a string followed by a newline char
  * @str: pointer to a string
  *
  * Returns: nothing.
  */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
