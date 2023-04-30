#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 *
 */
void jack_bauer(void)
{
	int i;
	int j;
	int m;
	int n;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i <= 1 && j <= 9) || (i <= 2 && j <= 3))
			{
				for (m = 0; m <= 5; m++)
				{
					for (n = 0; n <= 9; n++)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(':');
						_putchar(m + '0');
						_putchar(n + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
