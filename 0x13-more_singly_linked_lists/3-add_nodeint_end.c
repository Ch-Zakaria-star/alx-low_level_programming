#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listintT list
 * @head: the node at the beginning of the list
 * @n: the value to be contained in the new node
 * Return: the pointer to the new node, otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	current = *head;
	while (current && current->next != NULL)
	current = current->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = NULL;

	if (current)
	current->next = new;
	else
	*head = new;
	return (new);
}
