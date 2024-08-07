#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a dlistint_t linked list
 *
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all the data (n) in the list, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}
	return (total);
}
