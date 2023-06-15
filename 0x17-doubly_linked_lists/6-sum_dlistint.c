#include "lists.h"
/**
  * sum_dlistint - function that returns the sum of all
  * the data (n) of a dlistint_t linked list
  * @head: pointer to head node
  *
  * Return: sum of all data(n)
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
