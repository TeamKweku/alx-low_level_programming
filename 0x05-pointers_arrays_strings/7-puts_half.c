#include "main.h"
/**
  * puts_half - prints second half of string
  * @str: string to be printed
  *
  * Return: nothing
  */
void puts_half(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (*(str + len) != '\0')
		len++;
	if (len % 2 != 0)
	{
		i = (len - 1) / 2;
		i += 1;
	}
	else
	{
		i = len / 2;
	}
	for (; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
