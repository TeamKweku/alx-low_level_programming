#include "main.h"
/**
  * puts2 - function that prints character of a string
  * @str: the string to printed out
  *
  * Returns: nothing.
  */
void puts2(char *str)
{
	int len;
	int i;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
