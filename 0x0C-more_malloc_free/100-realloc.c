#include <stdlib.h>
/**
  * _realloc - function that reallocates a memory block using malloc
  * and free
  * @ptr: pointer memory previously allocated
  * @old_size: old size of ptr
  * @new_size: new size to be allocated
  *
  * Return: pointer to new allocated memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr_new = malloc(new_size);
		if (ptr_new == NULL)
		{
			return (NULL);
		}
		return (ptr_new);
	}
	else
	{
		ptr_new = malloc(new_size);
		if (ptr_new == NULL)
			return (NULL);
		i = 0;
		for (i = 0; i < old_size && i < new_size; i++)
		{
			ptr_new[i] = ((char *) ptr)[i];
		}
	}

	free(ptr);
	return (ptr_new);
}
