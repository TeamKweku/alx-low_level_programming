#include "main.h"
/**
  * reverse_array - function that reverses content of an
  * array of integers
  * @a: array provided
  * @n: number of elements in the array
  *
  * Return: nothing
  */
void reverse_array(int *a, int n)
{
	int temp;
	int *ptr1;
	int *ptr2;

	ptr1 = &a[0];
	ptr2 = &a[n - 1];

	while (ptr1 < ptr2)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1 += 1;
		ptr2 -= 1;
	}
}
