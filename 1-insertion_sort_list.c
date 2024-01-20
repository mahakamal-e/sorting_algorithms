#include "sort.h"
/**
 * insertion_sort_list - a function that sortes a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm.
 *
 * @list: pointer to a doubly linked list of integers.
 *
 * Return: void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *currNode, *prevNode;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	currNode = (*list)->next;

	while (currNode)
	{
		prevNode = currNode->prev;

		while (prevNode != NULL && prevNode->n > currNode->n)
		{
			if (prevNode->prev != NULL)
				prevNode->prev->next = currNode;
			currNode->prev = prevNode->prev;
			prevNode->prev = currNode;
			prevNode->next = currNode->next;
			currNode->next = prevNode;

			if (prevNode->next != NULL)
				prevNode->next->prev = prevNode;

			if (prevNode == *list)
				*list = currNode;

			print_list(*list);
			prevNode = currNode->prev;
		}
		currNode = currNode->next;
	}
}
