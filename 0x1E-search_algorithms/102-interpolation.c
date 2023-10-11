#include "search_algos.h"
/**
 * inter_search - a helper function for implementing the
 * search function
 * @array: array to be searched
 * @low: the low position for the formula
 * @high: high position for the formula
 * @value: value to be searched
 *
 * Return: position of value or -1 otherwise
 */
int inter_search(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));

	if (pos >= low + high)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	else if (array[pos] > value)
		return (inter_search(array, low, high - 1, value));
	else
		return (inter_search(array, low + 1, high, value));
}



/**
 * interpolation_search - function that searches for a value in a
 * sorted array of integers using the Interpolation search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched in array
 *
 * Return: positon of value or -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (inter_search(array, 0, size - 1, value));
}
