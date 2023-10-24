/*
 * file: 1-insertion_sort_list.c
 * Auth: kelechi nnadi && nonku yandah
 */

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 *                       in ascending order using the insertion algorithm
 *                       we are not allowed to modify the integer n of a
 *                       node, only have to swap the nodes themselves.
 *                       also expected to print the list after each time
 *                       you swap two elements
 * @list: the pointer to the  list to be swaped
 * Returns: nothing(everything should be printed inside the list)
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *key, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (key = (*list)->next; key != NULL; key = key->next)
	{
		for (temp = key->prev; temp != NULL && temp->n > key->n; temp = temp->prev)
		{
			if (temp->prev != NULL)
				temp->prev->next = key;
			else
				*list = key;

			if (key->next != NULL)
				key->next->prev = temp;

			key->prev = temp->prev;
			temp->prev = key->next;
			key->next = temp;

			printf("List after swap: ");
			print_list(*list);
		}
	}
}
