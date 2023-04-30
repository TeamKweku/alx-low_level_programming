#include <stdio.h>
/**
  * main - a program to print possible combination of
  * two digits
  * Return: 0 (success)
  */
int main(void)
{
	int i;
	int j;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (j != i && j < i)
			{
				putchar('0' + j);
				putchar('0' + i);

				if (i + j != 17)
				{
					putchar(44);
					putchar(32);
				}
			}
			i++;
		}
		j++;
	}
	putchar(10);
	return (0);
}
