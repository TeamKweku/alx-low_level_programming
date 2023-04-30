#include "main.h"
/**
 * _isalpha - checks if an input is a letter of the alphabet
 * @c: the character to be checked
 *
 * Return: 1(success) 0 (otherwise)
 */
int _isalpha(int c)
{
	int ch;

	ch = c;
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
