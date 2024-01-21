#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using Insertion sort algorithm.
 * @list: Pointer to a pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *key, *temp;
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;


    current = (*list)->next;

    while (current != NULL)
    {
        key = current;
        while (key->prev != NULL && key->n < key->prev->n)
        {
            temp = key->prev;
            key->prev = temp->prev;
            temp->prev = key;
            temp->next = key->next;
            key->next = temp;

            if (temp->next != NULL)
                temp->next->prev = temp;

            if (key->prev != NULL)
                key->prev->next = key;
            else
                *list = key;

            print_list(*list);
        }
        current = current->next;
    }
}
