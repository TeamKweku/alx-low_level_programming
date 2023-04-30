#include "main.h"
/**
  * print_number - print an integer
  * @n: variable to be printed
  */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		n *= -1;
		num = n;
		_putchar('-');
	}
	num /= 10;
	if (num != 0)
		print_number(num);
	_putchar((unsigned int) n % 10 + '0');
}
