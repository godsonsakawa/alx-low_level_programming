#include "lists.h"
#include <stdio.h>
/**
  * print_listint - prints all elements of a list.
  * @h: pointer to the head of the list_t list
  * Return: The number of nodes in the lists_t list
  */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
