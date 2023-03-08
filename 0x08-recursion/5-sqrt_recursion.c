#include "main.h"
/**
  * sqr_root - finds the natural square root of a number
  * @n: value passed to function
  * @num: number to be tested
  *
  * Return: square root (int) or -1 if no square root
  */
int sqr_root(int n, int num)
{
	if ((num * num) == n)
		return (num);
	if (num == n / 2)
		return (-1);
	return (sqr_root(n, num + 1));
}
/**
  * _sqrt_recursion - returns the natural square root of number
  * @n: value passed to function
  *
  * Return: square root or -1
  */
int _sqrt_recursion(int n)
{
	int num = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqr_root(n, num));
}
