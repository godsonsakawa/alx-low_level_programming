#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - adds a new node at the beginning of a list.
* @head: address of a pointer to the head.
* @n: number to add to the list.
*
* Return: address of the new element; Otherwise - NULL.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
// Create a newNode and allocate memory for it.
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL) {
        return NULL;
    } 
    
// Set the value and connections for the newNode
    newNode->n = n;
    newNode->prev = NULL;


    if (*head == NULL) {
// If the list is empty, make the newNode the head.
        newNode->next = NULL;
        *head = newNode;
    }
    else
    {
// The list is not empty, update connections accordingly.
        (*head)->prev = newNode;
        newNode->next = *head;
        *head = newNode;
    }
    
    return (newNode);
}
