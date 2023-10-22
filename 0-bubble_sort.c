#include <stddef.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array using the bubble algorithm
 * @array: a pointer to the array to be sorted
 * @size: size of the array 'number of elements in it'
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int tmp;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				tmp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
