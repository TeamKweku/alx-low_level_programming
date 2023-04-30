#include "main.h"
/**
 * print_sign - check for a sign + or - or 0
 * @n: the char to be checked
 *
 * Return: 0 or 1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		/* Ascii value for + is 43 */
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		/* Ascii value - is 45 */
		_putchar(45);
		return (-1);
	}
	else
	{
		/* Ascii value for 0 is 48 */
		_putchar(48);
		return (0);
	}
}
