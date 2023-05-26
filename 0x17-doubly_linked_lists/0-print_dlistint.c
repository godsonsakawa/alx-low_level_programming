#include "lists.h"

/**
* print_dlistint - prints all elements of a list.
* @h: head of the list.
*
* Return: The number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
    int nodes = 0;
    const dlistint_t *current = h;

    while(current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
        nodes++;
    }
    return (nodes);
}
