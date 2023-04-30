#include "main.h"
/**
 * _islower - prints whether a character is lowercase
 * @c: the number to be checked
 *
 * Return: 1(success) 0(otherwise)
 */
int _islower(int c)
{
	int ch;

	ch = c;
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
