#include <stdio.h>
/**
  * main - program the sum of all even numbers of
  * the fibonacci sequence less than 4,000,000
  *
  * Return: 0 (success)
  */
int main(void)
{
	int i;
	long j;
	long k;
	long sum;

	i = 0;
	j = 1;
	sum = k = 2;
	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
			sum += k;
		j = k - j;
		++i;
	}
	printf("%ld\n", sum);

	return (0);
}
