#include "main.h"
/**
 * print_alphabet - prints out the letters of the alphabet(lowercase)
 */
void print_alphabet(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
