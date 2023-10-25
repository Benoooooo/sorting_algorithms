/*
 * file: 3-quick_sort.c
 * Auth: kelechi nnadi && yandah nonku
 */
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * swapa - Swaps two integers in an array
 * @array: The array containing the integers
 * @a: Index of the first integer
 * @b: Index of the second integer
 */
void swapa(int *array, int a, int b)
{
	int temp = array[a];

	array[a] = array[b];
	array[b] = temp;
}

/**
 * lomuto_partition - Partition the array using Lomuto scheme
 * @array: The array to be partitioned
 * @low: The starting index for partition
 * @high: The ending index for partition
 * @size: The size of the array
 * Return: The index of the pivot element
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swapa(array, i, j);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		swapa(array, i + 1, high);
		print_array(array, size);
	}

	return (i + 1);
}
/**
 * quicksort - Recursively sort an array using Quick sort algorithm
 * @array: The array to be sorted
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * @size: The size of the array
 */
void quicksort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = lomuto_partition(array, low, high, size);

		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);
	}
}
/**
 *quick_sort - Sort an array of integers in ascending order using Quick sort
 * @array: The array to be sorted
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
