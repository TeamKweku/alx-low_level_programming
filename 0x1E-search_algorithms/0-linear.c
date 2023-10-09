#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an
 * array of integers using the Linear search algorithm
 *
 * @array: the array to be searched
 * @size: size of the array to be searched
 * @value: value to search in array
 *
 * Return: value if found or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
