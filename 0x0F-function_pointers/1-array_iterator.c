#include "function_pointers.h"
/**
  * array_iterator - a function that executes a function given as a parameter
  * on each element of an array
  * @array: array to be accessed for elements
  * @size: size of array
  * @action: function to be executed on each element of array
  *
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
