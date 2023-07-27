#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * list_len - prints all elements of a lits
  * @h: references our structure.
  * Return: number of elements in a linked list..
  */
size_t list_len(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
