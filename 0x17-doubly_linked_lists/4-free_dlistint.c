#include "lists.h"

/**
* free_dlistint - free a list
* @head: pointer to the head of our list.
* Return: nothing
*/

/** Lengthy description:
*  1. Start with the head node, have reference to the first node in our list.
*  2. We traverse our list as long as its not empty 
*     ++ store the reference to the next node
*     ++ because once we free our current we can't access it's next pointer
*  3. we free each node while we traverse our list.
*  4. we finally update the current node as our nextNode.
*/     

void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    
    while (current != NULL)
    {
        dlistint_t *nextNode = current->next;
        free(current);
        current = nextNode;
    }
}
