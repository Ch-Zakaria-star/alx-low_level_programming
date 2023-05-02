#include "lists.h"

/**
 * print_listint - Prints the elements of a list
 * @h: pointer to the head node
 * Return: returns the size of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;

		h = h->next;
	}

return (num);
}
