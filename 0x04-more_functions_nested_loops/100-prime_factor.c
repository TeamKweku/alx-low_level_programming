#include <stdio.h>
#include <math.h>
/**
  * main - program that prints the largest prime factor no
  *
  * Return: 0 (success)
  */
int main(void)
{
	long n;
	long max_fact;
	long num;
	double square;

	num = 612852475143;
	square = sqrt(num);

	for (n = 1; n <= square; n++)
	{
		if (num % n == 0)
		{
			max_fact = num / n;
		}
	}
	printf("%ld\n", max_fact);
	return (0);
}
