#include "search_algos.h"
/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched in array
 *
 * Return: index of value or -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, step = sqrt(size), m;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] <= value && value <= array[step])
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i, step);
				for (m = i; m <= step; m++)
				{
					printf("Value checked array[%lu] = [%d]\n", m, array[m]);
					if (array[m] == value)
						return (m);
				}
				return (-1);
			}
			i = step;
			step += sqrt(size);
		}
	}
	return (-1);
}
