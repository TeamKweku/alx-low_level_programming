#include <stdio.h>

/**
  * main - program to print letters of alphabet
  * in lower cases and upper cases
  * Return: 0 (success)
  */

int main(void)
{
	int n;
	int m;

	n = 'a';
	m = 'A';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar(10);
	return (0);
}
