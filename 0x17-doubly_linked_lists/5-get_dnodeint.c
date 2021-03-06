#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - This function return the specific node
 * in a linked list, identifier with index.
 *@head: This is the pointer to the head of the linked list.
 *@index: Index given for the user.
 *Return: The node in the specific index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	while (head && counter < index)
	{
		head = head->next;
		counter++;
	}

	return (head);
}
