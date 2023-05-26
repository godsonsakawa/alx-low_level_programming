#include "lists.h"

/**
* add_dnodeint_end - add node at the end of a list.
* @head: address to a pointer to a head.
* @n: node to add at the end of a list.
*
* Return: Address of the node added, Otherwise Return NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
// If the newNode is empty return NULL, handling memory allocation error.
    if (newNode == NULL)
    {
        return NULL;
    }

// Set connections of the newNode to be added
    newNode->n = n;
    newNode->next = NULL;

    if (*head == NULL)
    {
// if our list is empty our newNode becomes the last node
        newNode->prev = NULL;
        *head = newNode;
    }
    else
    {
// If the list is not empty traverse to the end of the list to add our new element.
        dlistint_t *current = *head;
        while ((current)->next != NULL)
// Traverse the loop as long as the node is not empty/NULL
        {
            current= (current)->next;
        }
        (current)->next = newNode;
        newNode->prev = current;        
    }
    return (newNode);
}
