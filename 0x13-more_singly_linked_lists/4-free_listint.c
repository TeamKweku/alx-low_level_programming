#include "lists.h"
/**
  * free_listint - function that frees a listint_t list
  * @head: pointer to head node
  *
  * Return: returns nothing
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);

		head = temp;
	}
}
