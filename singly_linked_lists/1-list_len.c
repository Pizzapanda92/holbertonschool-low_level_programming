#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the head of the list_t list
 *
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		++count;
	}

	return (count);
}
