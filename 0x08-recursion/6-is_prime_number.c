#include "main.h"

int is_prime(int, int);

/**
  * is_prime_number - checks if an integer is prime
  * @n: integer value
  *
  * Return: 1 or 0 if prime or not
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}

/**
  * is_prime - calculates if a number is prime recursively
  * @n: integer to evaluate
  * @i: iterative value
  *
  * Return: 1 or 0 if prime or not
  */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime(n, i - 1));
}
