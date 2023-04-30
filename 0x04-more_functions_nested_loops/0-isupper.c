#include "main.h"
/**
 * _isupper - prints whether a character is uppercase
 * @c: the variable to be checked
 *
 * Return: 1(success) 0(otherwise)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
