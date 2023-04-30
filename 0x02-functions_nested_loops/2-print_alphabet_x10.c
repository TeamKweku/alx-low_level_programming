#include "main.h"
/**
 * print_alphabet_x10 - a function that prints all letters of
 * the alphabet in lowercase x10
 *
 */
void print_alphabet_x10(void)
{
	int ch;
	int i;

	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
