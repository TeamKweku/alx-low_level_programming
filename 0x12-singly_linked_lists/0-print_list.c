#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * print_list - function that prints all the elements of a list_t
  * list
  * @h: pointer to a list_t list
  *
  * Return: number of nodes in the list or [0] (nil)
  * if str is NULL
  */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		n++;
	}
	return (n);
}
