#include "main.h"
/**
  * print_binary - function that prints the binary representation of
  * a number
  * @n: the number to be printed
  *
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int num;

	i = 63;

	while (i >= 0)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		i--;
	}

	if (!count)
		_putchar('0');
}
