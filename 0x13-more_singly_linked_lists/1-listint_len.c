#include "lists.h"

/**
 * listint_len - Computes the length of the list
 *
 * @h: A pointer to the head of the list.a
 *
 * Return: Returns the number of nodes in the list.
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
