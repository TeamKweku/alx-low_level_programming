#include <stdio.h>
/**
  * main - main program execution
  * Return: 0 (success)
  */
int main(void)
{
	int n;
	int i;

	n = 100;
	for (i = 1; i <= n; i++)
	{
		/* for number divisible by 15 (3 & 5) */
		if ((i % 15) == 0)
			printf("FizzBuzz");
		/* for numbers divisible only 3 */
		else if ((i % 3) == 0)
			printf("Fizz");
		/* for numbers divisible by 5 */
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
