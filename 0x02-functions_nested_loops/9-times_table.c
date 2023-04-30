#include "main.h"
/**
 * times_table - function that prints the 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int k;
	int m;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				m = k % 10;
				n = (k - m) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(n + '0');
				_putchar(m + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
