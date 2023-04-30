#include <stdio.h>
/**
  * main - program that print all possible combination of single
  * digit numbers
  *Return: 0 (success)
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			/* ascii value for comma(,) */
			putchar(44);
			/* ascii value for space 32 */
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
