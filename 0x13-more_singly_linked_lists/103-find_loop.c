#include "lists.h"
/**
  * find_listint_loop - function that finds a loop in a linked list
  * @head: pointer to the head node of list_t list
  *
  * Return: address of the where the loop starts
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr;
	listint_t *fast_ptr;

	if (head == NULL)
		return (NULL);
	slow_ptr = fast_ptr = head;

	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (slow_ptr);
		}
	}

	return (NULL);
}
