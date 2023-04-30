#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * print_listint - function that prints all the elements of a listint_t
  * list
  * @h: pointer to a listint_t list
  *
  * Return: returns number of nodes in the listint
  */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}

	return (n);
}
