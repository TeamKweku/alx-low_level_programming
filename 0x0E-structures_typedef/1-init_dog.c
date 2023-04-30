#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - a function that initializes a variable of type struct dog
  * @d: pointer to struct dog
  * @name: pointer to string
  * @age: float value for age
  * @owner: pointer to string
  *
  * Return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		struct dog *ptr = d;

		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
	}
}
