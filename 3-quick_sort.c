#include "sort.h"

/**
 * quick_sort - a function that sorts an array of integers.
 *
 * @array: Input array
 * @size: Size of the array
 *
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}

/**
 * partition - Lomuto partition scheme.
 *
 * @array: Array to be sorted.
 * @low: Low index.
 * @high: High index.
 * @size: Size of the array
 *
 * Return: Index of the pivot element.
 */
size_t partition(int *array, ssize_t low, ssize_t high, size_t size)
{
	int pivot = array[high];
	ssize_t i = low - 1;
	ssize_t j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap_func(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap_func(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quicksort - a function that called Recursively to perform quicksort.
 *
 * @array: Input array.
 * @low: Starting index.
 * @high: Ending index.
 * @size: Size of the array.
 *
 */
void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
	size_t pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high, size);

		quicksort(array, low, pivot_index - 1, size);
		quicksort(array, pivot_index + 1, high, size);
	}
}

/**
 * swap_func - Swaps two elements.
 *
 * @a: Pointer to the first element in array.
 * @b: Pointer to the second element in array.
 */
void swap_func(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
