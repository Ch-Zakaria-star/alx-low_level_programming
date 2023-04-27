#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int count = 0;
	list_t *nod;

	while (str[count])
	{
		count++;
	}
	nod = malloc(sizeof(list_t));
	if (!nod)
	{
		return (NULL);
	}
	nod->str = strdup(str);
	nod->len = count;
	nod->next = *head;
	*head = nod;
	return (*head);
}
