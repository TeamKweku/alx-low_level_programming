#include "search_algos.h"
/**
 * print_array - this helper function prints the array passed
 * to the function
 * @array: the array to be printed
 * @low: the lower index of array
 * @high: higher index of array
 *
 * Return: nothing
 */
void print_array(int *array, size_t low, size_t high)
{
	char *seperator = NULL;

	printf("Searching in array: ");

	for (; low <= high; low++)
	{
		if (seperator != NULL)
			printf("%s", seperator);
		printf("%d", array[low]);
		seperator = ", ";
	}

	printf("\n");
}

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched in array
 *
 * Return: index of value or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high = size - 1, mid, low = 0;

	if (array == NULL)
		return (-1);

	print_array(array, low, high);
	while (low != high)
	{
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;

		print_array(array, low, high);
	}

	if (array[high] == value)
		return (high);

	return (-1);
}
