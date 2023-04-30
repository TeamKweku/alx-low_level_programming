#include <stdio.h>
/**
  * main - program prints single integers with only putchar
  * Return: 0 (success)
  */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar(10);
	return (0);
}
