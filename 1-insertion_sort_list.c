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
	listint_t *current, *insert;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		insert = current;
		current = current->next;

		while (insert->prev && insert->n < insert->prev->n)
		{
			if (insert->next)
				insert->next->prev = insert->prev;

			insert->prev->next = insert->next;
			insert->next = insert->prev;
			insert->prev = insert->prev->prev;

			if (insert->prev)
				insert->prev->next = insert;
			else
				*list = insert;

			insert->next->prev = insert;

			print_list(*list);
		}
	}
}
