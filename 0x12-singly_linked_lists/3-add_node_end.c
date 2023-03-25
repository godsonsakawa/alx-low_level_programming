#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * add_node_end - adds a new node at the end of a list.
  * @head: head of the linked list>
  * @str: string to be added to the list
  * Return: if function fails - NULL
  *         Otherwise- address of the new element.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	int len;
	/* 1. allocate node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (len = 0; str[len];)
	{
		len++;
	}
	/* 2. put/copy in the data  */
	new_node->str = strdup(str);
	new_node->len = len;
	/* 3. This new node is going to be the last node,next of it is NULL*/
	new_node->next = NULL;

	/* 4. If the Linked List is empty, then make the new_node as head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		/* 6. Change the next of last node/add new node to end */
		last_node->next = new_node;
	}
	return (*head);
}
