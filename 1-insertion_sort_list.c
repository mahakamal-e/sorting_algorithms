#include "sort.h"

/**
 * insertion_sort_list - a function that used sorting algorithm.
 *
 * @list: Pointer to a pointer to the head of linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *currNode, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	currNode = (*list)->next;

	while (currNode != NULL)
	{
		while (currNode->prev != NULL && currNode->n < currNode->prev->n)
		{
			temp = currNode->prev;
			currNode->prev = temp->prev;
			temp->prev = currNode;
			temp->next = currNode->next;
			currNode->next = temp;

			if (temp->next != NULL)
				temp->next->prev = temp;

			if (currNode->prev != NULL)
				currNode->prev->next = currNode;
			else
				*list = currNode;
			print_list(*list);
		}
		currNode = currNode->next;
	}
}
