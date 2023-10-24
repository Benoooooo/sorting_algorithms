#include "sort.h"

/**
 * get_max_num - finds the maximum value in an array
 * @array: the array
 * @size: size of the array
 * Return: the maximum value
 */
int get_max_num(int *array, size_t size)
{
	int max = array[0];
	size_t i;

	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}

	return (max);
}

/**
 * counting_sort - sorting an array using counting_sort
 *		algorithm
 * @array: the array
 * @size: size of the array
 * Return: void
 */

void counting_sort(int *array, size_t size)
{
	int i, *counter, *output; 
	int j, n;

	if (array == NULL || size < 2)
		return;

	n = get_max_num(array, size);
	counter = malloc(sizeof(int) * (n + 1));
	output = malloc(sizeof(int) * ((int)size + 1));

	if (counter == NULL || output == NULL)
	{
		free(output);
		return;
	}

	for (i = 0; i < n + 1; i++)
		counter[i] = 0;

	for (i = 0; i < (int)size; i++)
	{
		j = array[i];
		counter[j] += 1;
	}

	for (i = 1; i < n + 1; i++)
		counter[i] += counter[i - 1];
	print_array(counter, n + 1);

	for (i = (int)size; i > 0; i--)
	{
		j = array[i - 1];
		counter[j] -= 1;
		output[counter[j]] = array[i - 1];
	}

	for (i = 0; i < (int)size; i++)
		array[i] = output[i];

	free(counter);
	free(output);
}
