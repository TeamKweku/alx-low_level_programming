#include "function_pointers.h"
/**
  * int_index - searches an array of integers and returns
  * the index of the occurance of a pass to a function call
  * @array: a pointer to an array of ints
  * @size: size of the array
  * @cmp: function  to be tested on array of ints
  *
  * Return: index of integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) > 0)
			break;
		i++;
	}

	if (i == size)
		return (-1);

	return (i);
}
