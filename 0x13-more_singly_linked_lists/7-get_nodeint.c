#include "lists.h"
/**
  * get_nodeint_at_index - function that returns the nth
  * node of a listint_t linked list
  * @head: the head node
  * @index: index of node to be fetched
  *
  * Return: node at index n or NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	temp = head;

	count = 0;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
