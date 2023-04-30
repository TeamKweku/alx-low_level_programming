#include <stdlib.h>
/**
  * array_range - function that creates an array of range of int
  * @min: mininum value in range
  * @max: maximum value in range
  *
  * Return: pointer to array
  */
int *array_range(int min, int max)
{
	int *arr_range;
	int i, range;

	if (min > max)
		return (NULL);
	range = max - min;
	arr_range = malloc(sizeof(int) * (range + 1));
	if (arr_range == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		arr_range[i] = min;
		i++;
		min++;
	}

	return (arr_range);
}
