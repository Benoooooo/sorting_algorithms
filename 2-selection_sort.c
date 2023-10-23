#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: pointer to array
 * @size: size of the array
 * Returns: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int select_val;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			select_val = array[i];
			array[i] = array[min_idx];
			array[min_idx] = select_val;
			print_array(array, size);
		}
	}
}
