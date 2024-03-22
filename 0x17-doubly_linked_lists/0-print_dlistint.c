#include <stddef.h> // for size_t
#include <stdio.h> // for printf
#include "lists.h" // assuming this is the header file where dlistint_t is defined

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t n_count = 0;
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        n_count++;
    }

    return n_count;
}
