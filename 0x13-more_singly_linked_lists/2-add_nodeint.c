#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: the node at the beginning of the list
 * @n: the value to be contained in the new node
 * Return: the pointer to the new node, otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
