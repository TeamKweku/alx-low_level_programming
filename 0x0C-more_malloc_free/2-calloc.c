#include <stdlib.h>
/**
  * _calloc - function that allocates memory for an array of nmemb
  * of elements size size bytes
  * @nmemb: size of elements in array
  * @size: size of type of array
  *
  * Return: pointer to array
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	arr = malloc(j);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < j)
	{
		arr[i]  = 0;
		i++;
	}
	return (arr);
}
