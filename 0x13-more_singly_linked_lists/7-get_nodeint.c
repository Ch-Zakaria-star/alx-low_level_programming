#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of listint_t list
 * @head: pointer to head node
 * @index: index to find list, starting at 0
 * Return: pointer to node or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
