#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - a function that free memory allocated by function
  * call to dog_t *new_dog
  * @d: pointer to new_dog
  *
  * Return: nothing
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
