#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
*print_dlistint - This function pritnrs all the elements
*of a dlistint_t
*@h: This is a double linked list which we print all elemt.
*Return: a size_t with the number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;

	}
	return (counter);
}
