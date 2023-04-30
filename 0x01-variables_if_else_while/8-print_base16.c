#include <stdio.h>
/**
  * main - prints all numbers of base 16
  * Return: 0 (success)
  */

int main(void)
{
	int n;
	int m;

	n = 0;
	m = 'a';
	while (n < 16)
	{
		if (n < 10)
		{
			putchar(n + '0');
		}

		else
		{
			putchar(m);
			m++;
		}

		n++;
	}
	putchar(10);
	return (0);
}
