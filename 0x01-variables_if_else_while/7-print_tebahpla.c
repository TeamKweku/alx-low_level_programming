#include <stdio.h>
/**
  * main - program prints the letters of the alphabet
  * in reverse
  * Return: 0 (success)
  */

int main(void)
{
	int n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar(10);
	return (0);
}
