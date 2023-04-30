#include <stdio.h>
#include "lists.h"
/**
  * get_loop_len - function that counts a listint_t linked
  * list and checkss if there is a loop in linked list
  * using the Floyd's cycle finding algorithm
  * @head: pointer to head node
  *
  * Return: returns number of nodes in list
  */
size_t get_loop_len(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	slow_ptr = head->next;
	fast_ptr = head->next->next;

	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
				count++;
			}

			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				count++;
			}

			return (count);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}

	return (0);
}

/**
  * print_listint_safe - function that prints linked list
  * @head: pointer to head node
  *
  * Return: number of nodes in list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, i;

	count = get_loop_len(head);

	if (count == 0)
	{
		for (; head != NULL; count++, head = head->next)
			printf("[%p] %d\n", (void *)head, head->n);
	}
	else
	{
		for (i = 0; i < count; i++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
		printf("-> [%p] %d\n", (void *) head, head->n);
	}

	return (count);
}
